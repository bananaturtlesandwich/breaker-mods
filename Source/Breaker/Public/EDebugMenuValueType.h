#pragma once
#include "CoreMinimal.h"
#include "EDebugMenuValueType.generated.h"

UENUM(BlueprintType)
enum class EDebugMenuValueType : uint8 {
    None,
    Bool,
    Int,
    Combo,
    Tag,
    CVarBool,
    CVarInt,
    CVarCommand,
    Float,
    CVarFloat,
};

