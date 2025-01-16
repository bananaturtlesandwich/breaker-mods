#pragma once
#include "CoreMinimal.h"
#include "EHMStatEventValueType.generated.h"

UENUM(BlueprintType)
enum class EHMStatEventValueType : uint8 {
    Integer,
    Float,
    State,
    String,
    Position,
    Vector,
    Rotation,
    Transform,
    DeltaInt,
    DeltaFloat,
    Duration,
    Object,
    EmptyFlag = Integer,
    HasContext = 64,
    InlineData = 128,
};

