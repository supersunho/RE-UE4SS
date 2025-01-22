#pragma once

#include <bit>

#define GET_FUNCPTR_FROM_ADDR(func, type, value) auto func = std::bit_cast<type>((value));

