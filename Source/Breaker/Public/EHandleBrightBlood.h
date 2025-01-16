#pragma once
#include "CoreMinimal.h"
#include "EHandleBrightBlood.generated.h"

UENUM(BlueprintType)
enum class EHandleBrightBlood : uint8 {
    RunStart,
    RunEnd,
    QuitMidRun,
};

