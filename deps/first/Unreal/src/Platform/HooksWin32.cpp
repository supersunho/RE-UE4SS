#include <Unreal/Hooks.hpp>

#include <Unreal/UObjectGlobals.hpp>
#include <Unreal/UObject.hpp>
#include <Unreal/ULocalPlayer.hpp>

#include <polyhook2/ZydisDisassembler.hpp>

#include <bit>

namespace RC::Unreal::Platform {
    auto LocateCallFunctionByNameWithArguments() -> void {
        if (!UObject::ProcessConsoleExecInternal.is_ready())
        {
            Output::send<LogLevel::Warning>(SYSSTR("Tried to hook CallFunctionByNameWithArguments without an address to ProcessConsoleExec"));
            return;
        }

        auto ProcessConsoleExec = UObject::ProcessConsoleExecInternal.get_function_address();
        int CallCount{};
        auto Data = std::bit_cast<ZyanU8*>(ProcessConsoleExec);
        ZydisDecoder Decoder;
        ZydisDecoderInit(&Decoder, ZYDIS_MACHINE_MODE_LONG_64, ZYDIS_STACK_WIDTH_64);
        ZyanU64 RuntimeAddress = std::bit_cast<ZyanU64>(ProcessConsoleExec);
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
            
            if (CallCount == 1)
            {
                auto FunctionPtr = ASM::resolve_function_address_from_potential_jmp(std::bit_cast<void*>(RuntimeAddress));
                UObject::CallFunctionByNameWithArgumentsInternal.assign_address(FunctionPtr);
                break;
            }
            Offset += Instruction.length;
            RuntimeAddress += Instruction.length;
        }
    }

    auto LocateULocalPlayerExec(uint8_t FExecVTableOffsetInLocalPlayer) -> void
    {
        // Hook::StaticStorage::FExecVTableOffsetInLocalPlayer = FExecVTableOffsetInLocalPlayer;
        auto* LocalPlayer = UObjectGlobals::StaticFindObject_InternalSlow(nullptr, nullptr, STR("/Script/Engine.Default__LocalPlayer"));
        if (!LocalPlayer)
        {
            Output::send<LogLevel::Warning>(SYSSTR("Tried to hook ULocalPlayer::Exec but was unable to find 'Engine.Default__LocalPlayer' to use to retrieve its address.\n"));
            return;
        }

        auto VTable = std::bit_cast<std::byte*>(*std::bit_cast<std::byte**>(LocalPlayer + FExecVTableOffsetInLocalPlayer));
        auto Func = *std::bit_cast<void**>(VTable + 0x10); // this should be 0x10?
        fprintf(stderr, "Oringal ULocalPlayer::ExecInternal: %p\n", Func);
        auto Data = std::bit_cast<ZyanU8*>(Func);
        ZydisDecoder Decoder;
        ZydisDecoderInit(&Decoder, ZYDIS_MACHINE_MODE_LONG_64, ZYDIS_STACK_WIDTH_64);
        ZyanU64 RuntimeAddress = std::bit_cast<ZyanU64>(Func);
        ZyanUSize Offset = 0;
        const ZyanUSize NumBytesToDecode = 8;
        ZydisDecodedInstruction Instruction;
        ZydisDecodedOperand Operands[10]{};
        while (ZYAN_SUCCESS(ZydisDecoderDecodeFull(&Decoder, Data + Offset, NumBytesToDecode - Offset, &Instruction, Operands)))
        {
            if (Instruction.mnemonic == ZYDIS_MNEMONIC_JMP)
            {
                ZyanU64 ResultAddress{};
                if (ZYAN_SUCCESS(ZydisCalcAbsoluteAddress(&Instruction, &Operands[0], RuntimeAddress, &ResultAddress)))
                {
                    ULocalPlayer::ExecInternal.assign_address(std::bit_cast<void*>(ResultAddress));
                }
                else
                {
                    Output::send<LogLevel::Warning>(SYSSTR("Tried to hook ULocalPlayer::Exec but was unable to resolve JMP instruction.\n"));
                }
            }
            else
            {
                ULocalPlayer::ExecInternal.assign_address(std::bit_cast<void*>(Func));
            }
            break;
        }
    }
}