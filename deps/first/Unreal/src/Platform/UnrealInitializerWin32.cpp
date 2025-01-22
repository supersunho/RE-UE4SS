#include <bit>
#include <algorithm>

#include <Unreal/Hooks.hpp>
#include <Unreal/UObject.hpp>
#include <Unreal/UnrealInitializer.hpp>
#include <Unreal/UnrealVersion.hpp>
#include <Unreal/UObjectGlobals.hpp>
#include <Unreal/UFunction.hpp>

#include <Zydis/Zydis.h>

#define NOMINMAX
#include <Windows.h>
#include <Psapi.h>

namespace RC::Unreal::UnrealInitializer::Platform
{

    auto SetupUnrealModules() -> void
    {
        // Setup all modules for the aob scanner
        MODULEINFO ModuleInfo;
        K32GetModuleInformation(GetCurrentProcess(), GetModuleHandle(nullptr), &ModuleInfo, sizeof(MODULEINFO));
        SigScannerStaticData::m_modules_info[ScanTarget::MainExe] = ModuleInfo;

        HMODULE Modules[1024];
        DWORD BytesRequired;

        if (K32EnumProcessModules(GetCurrentProcess(), Modules, sizeof(Modules), &BytesRequired) == 0)
        {
            throw std::runtime_error{std::format("Was unable to enumerate game modules. Error Code: {}", GetLastError())};
        }

        // Default all modules to be the same as MainExe
        // This is because most UE4 games only have the MainExe module
        for (size_t i = 0; i < static_cast<size_t>(ScanTarget::Max); ++i)
        {
            SigScannerStaticData::m_modules_info.array[i] = ModuleInfo;
        }

        // Check for modules and save the module info if they exist
        for (auto i = 0; i < BytesRequired / sizeof(HMODULE); ++i)
        {
            char ModuleRawName[MAX_PATH];
            // TODO: Fix an occasional error: "Call to K32GetModuleBaseNameA failed. Error Code: 6 (ERROR_INVALID_HANDLE)"
            if (K32GetModuleBaseNameA(GetCurrentProcess(), Modules[i], ModuleRawName, sizeof(ModuleRawName) / sizeof(char)) == 0)
            {
                continue;
            }

            std::string ModuleName{ModuleRawName};

            for (size_t i2 = 0; i2 < static_cast<size_t>(ScanTarget::Max); ++i2)
            {
                std::string ModuleToFind{"-"};
                ModuleToFind.append(ScanTargetToString(i2));
                ModuleToFind.append("-Win64-Shipping.dll");

                size_t Occurrence = ModuleName.find(ModuleToFind);
                if (Occurrence != ModuleName.npos)
                {
                    if (!SigScannerStaticData::m_is_modular) { SigScannerStaticData::m_is_modular = true; }

                    K32GetModuleInformation(GetCurrentProcess(), Modules[i], &SigScannerStaticData::m_modules_info[static_cast<ScanTarget>(i2)], sizeof(MODULEINFO));
                }
            }
        }
    }

    auto LocateProcessInternal() -> void {
        auto ExecuteUbergraphFunction = UObjectGlobals::StaticFindObject<UFunction*>(nullptr, nullptr, STR("/Script/CoreUObject.Object:ExecuteUbergraph"));
        if (!ExecuteUbergraphFunction)
        {
            throw std::runtime_error{"Was unable to find locate ProcessInternal because '/Script/CoreUObject.Object:ExecuteUbergraph' wasn't found in GUObjectArray"};
        }
        auto ProcessInternal = ExecuteUbergraphFunction->GetFuncPtr();
        ProcessInternal = std::bit_cast<decltype(ProcessInternal)>(ASM::resolve_function_address_from_potential_jmp(std::bit_cast<void*>(ProcessInternal)));
        Output::send(SYSSTR("ProcessInternal address: {} <- Built-in\n"), std::bit_cast<void*>(ProcessInternal));
        if (Version::IsAtLeast(4, 22))
        {
            int CallCount{};
            auto Data = std::bit_cast<ZyanU8*>(ProcessInternal);
            ZydisDecoder Decoder;
            ZydisDecoderInit(&Decoder, ZYDIS_MACHINE_MODE_LONG_64, ZYDIS_STACK_WIDTH_64);
            ZyanU64 RuntimeAddress = std::bit_cast<ZyanU64>(ProcessInternal);
            ZyanUSize Offset = 0;
            const ZyanUSize NumBytesToDecode = 164;
            ZydisDecodedInstruction Instruction;
            ZydisDecodedOperand Operands[10]{};
            while (ZYAN_SUCCESS(ZydisDecoderDecodeFull(&Decoder, Data + Offset, NumBytesToDecode - Offset, &Instruction, Operands)))
            {
                if (Instruction.mnemonic == ZYDIS_MNEMONIC_CALL)
                {
                    ++CallCount;
                }

                if (CallCount == 3)
                {
                    auto FunctionPtr = ASM::resolve_function_address_from_potential_jmp(std::bit_cast<void*>(RuntimeAddress));
                    if (FunctionPtr)
                    {
                        UObject::ProcessLocalScriptFunctionInternal.assign_address(FunctionPtr);
                    }
                    break;
                }

                Offset += Instruction.length;
                RuntimeAddress += Instruction.length;
            }
        }
        UObject::ProcessInternalInternal.assign_address(ProcessInternal);
        Output::send(SYSSTR("ProcessLocalScriptFunction address: {} <- Built-in\n"), UObject::ProcessLocalScriptFunctionInternal.get_function_address());
    }
}
