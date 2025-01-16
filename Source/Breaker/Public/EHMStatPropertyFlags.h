#pragma once
#include "CoreMinimal.h"
#include "EHMStatPropertyFlags.generated.h"

UENUM(BlueprintType)
enum class EHMStatPropertyFlags : uint8 {
    Zero,
    KeyProperty,
    NonNumeric,
    InstanceShared = 4,
    GlobalShared = 8,
    PoolGroup1 = 16,
    PoolGroup2 = 32,
    PoolGroup3 = 64,
    Hidden = 128,
    AllPoolGroups = 112,
};

