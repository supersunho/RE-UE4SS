#pragma once

namespace RC::Unreal {
    struct FStructuredArchive {
        struct FStream {
            class Dummy {};
            FStructuredArchive::FStream::Dummy EnterElement() {
                return FStructuredArchive::FStream::Dummy{};
            }
        };
        struct FSlot {
            FStructuredArchive::FStream EnterStream() {
                return FStructuredArchive::FStream{};
            }
        };
    };
}