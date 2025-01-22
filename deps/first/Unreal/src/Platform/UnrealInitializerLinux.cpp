#include <Unreal/UnrealInitializer.hpp>

#include <dlfcn.h>
#include <link.h>

#include <Unreal/Hooks.hpp>
#include <Unreal/UObject.hpp>
#include <Unreal/UnrealVersion.hpp>
#include <Unreal/UObjectGlobals.hpp>
#include <Unreal/UFunction.hpp>

#include <SigScanner/SinglePassSigScannerLinux.hpp>

#include <Zydis/Zydis.h>

#include <bit>
#include <algorithm>

namespace RC::Unreal::UnrealInitializer::Platform
{
    auto SetupUnrealModules() -> void
    {
        // Setup all modules for the aob scanner
        dl_iterate_phdr([](struct dl_phdr_info* info, size_t, void*) -> int {
            DLData dl_data;
            dl_data.libname = info->dlpi_name;
            if (dl_data.libname.empty()) {
                // empty = main
                uint64_t map_start = -1, map_end = 0;
                for (int i = 0; i < info->dlpi_phnum; ++i)
                {
                    if (info->dlpi_phdr[i].p_type != PT_LOAD) { continue; }
                    map_start = std::min(map_start, info->dlpi_phdr[i].p_vaddr);
                    map_end = std::max(map_end, info->dlpi_phdr[i].p_vaddr + info->dlpi_phdr[i].p_memsz);
                    dl_data.phdrs.emplace(reinterpret_cast<uint8_t*>(dl_data.base_address + info->dlpi_phdr[i].p_vaddr), info->dlpi_phdr[i].p_memsz, info->dlpi_phdr[i].p_flags);
                }

                dl_data.base_address = reinterpret_cast<uint8_t*>(info->dlpi_addr) + map_start;
                dl_data.map_start = map_start;
                dl_data.map_end = map_end;
                dl_data.size = map_end - map_start;
                SigScannerStaticData::m_modules_info[ScanTarget::MainExe] = dl_data;
            }
            return 0;
        }, nullptr);
        // copy main for all other modules
        for (int i = 1; i < (int)ScanTarget::Max; i++) {
            SigScannerStaticData::m_modules_info[(ScanTarget)i] = SigScannerStaticData::m_modules_info[ScanTarget::MainExe];
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
            auto Data = std::bit_cast<ZyanU8*>(ProcessInternal);
            ZydisDecoder Decoder;
            ZydisDecoderInit(&Decoder, ZYDIS_MACHINE_MODE_LONG_64, ZYDIS_STACK_WIDTH_64);
            ZyanU64 RuntimeAddress = std::bit_cast<ZyanU64>(ProcessInternal);
            ZyanUSize Offset = 0;
            const ZyanUSize NumBytesToDecode = 386;
            ZydisDecodedInstruction Instruction;
            int count = 0;
            ZydisDecodedOperand operands[ZYDIS_MAX_OPERAND_COUNT];
            while (ZYAN_SUCCESS(ZydisDecoderDecodeFull(&Decoder, Data + Offset, NumBytesToDecode - Offset, &Instruction, operands)))
            {
                // if is JUMP!!!! family, not call family
                if (Instruction.meta.category == ZYDIS_CATEGORY_COND_BR)
                {
                    // get target address if the branch taken
                    if (count == 3) break;
                    ZyanU64 TargetAddress = 0;
                    if (ZYAN_SUCCESS(ZydisCalcAbsoluteAddress(&Instruction, &operands[0], RuntimeAddress, &TargetAddress)))
                    {
                        fprintf(stderr, "Branch taken to: %p\n", (void*)TargetAddress);
                        Offset = TargetAddress - (ZyanUSize) Data;
                        RuntimeAddress = TargetAddress;
                        count++;
                        continue;
                    }
                    break;
                }
                if (Instruction.mnemonic == ZYDIS_MNEMONIC_JMP) {
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