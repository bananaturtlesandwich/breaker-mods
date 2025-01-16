#pragma once
#include "CoreMinimal.h"
#include "EEasingType.generated.h"

UENUM(BlueprintType)
enum class EEasingType : uint8 {
    Linear,
    QuadIn,
    QuadOut,
    QuartIn,
    QuartOut,
    SmoothStep,
    SmootherStep,
};

