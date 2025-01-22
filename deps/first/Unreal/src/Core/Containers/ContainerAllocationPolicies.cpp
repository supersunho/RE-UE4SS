// Copyright Epic Games, Inc. All Rights Reserved.

#include "Unreal/ContainerAllocationPolicies.hpp"

#include <DynamicOutput/DynamicOutput.hpp>


namespace RC::Unreal
{
	FORCENOINLINE void UE::Core::Private::OnInvalidAlignedHeapAllocatorNum(int32 NewNum, SIZE_T NumBytesPerElement)
	{
		Output::send<LogLevel::Error>(SYSSTR("Trying to resize TAlignedHeapAllocator to an invalid size of {} with element size {}"), NewNum, NumBytesPerElement);
		for (;;);
	}

	FORCENOINLINE void UE::Core::Private::OnInvalidSizedHeapAllocatorNum(int32 IndexSize, int64 NewNum, SIZE_T NumBytesPerElement)
	{
		Output::send<LogLevel::Error>(SYSSTR("Trying to resize TSizedHeapAllocator<{}> to an invalid size of {} with element size {}"), IndexSize, NewNum, NumBytesPerElement);
		for (;;);
	}

	template CORE_API void TSizedHeapAllocator<32, FMemory>::ForAnyElementType::ResizeAllocation(SizeType PreviousNumElements, SizeType NumElements, SIZE_T NumBytesPerElement);
	template CORE_API void TSizedHeapAllocator<32, FMemory>::ForAnyElementType::ResizeAllocation(SizeType PreviousNumElements, SizeType NumElements, SIZE_T NumBytesPerElement, uint32 AlignmentOfElement);
	template CORE_API void TSizedHeapAllocator<64, FMemory>::ForAnyElementType::ResizeAllocation(SizeType PreviousNumElements, SizeType NumElements, SIZE_T NumBytesPerElement);
	template CORE_API void TSizedHeapAllocator<64, FMemory>::ForAnyElementType::ResizeAllocation(SizeType PreviousNumElements, SizeType NumElements, SIZE_T NumBytesPerElement, uint32 AlignmentOfElement);

}
