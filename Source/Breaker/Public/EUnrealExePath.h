#pragma once
#include "CoreMinimal.h"
#include "EUnrealExePath.generated.h"

UENUM(BlueprintType)
enum class EUnrealExePath : uint8 {
    ThisInstance,
    LocalPackagedGame,
    Steam,
    Custom,
};

