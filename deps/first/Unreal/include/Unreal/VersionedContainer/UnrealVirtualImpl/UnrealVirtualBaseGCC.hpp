#pragma once

#include <bit>

struct MPTStruct {
	void* addr;
	int64_t delta;
};

#define GET_FUNCPTR_FROM_ADDR(func, type, value)            \
    MPTStruct fptr;                                         \
    fptr.addr = (void*)(((uint64_t) (value) ));             \
    fptr.delta = 0;                                         \
    auto func = std::bit_cast<type>(fptr);                  \

