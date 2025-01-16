#pragma once
#include "CoreMinimal.h"
#include "ELevelChangeStatus.generated.h"

UENUM(BlueprintType)
enum class ELevelChangeStatus : uint8 {
    Idle,
    Initiated,
    FadeOutBegun,
    FadeOutEnded,
    StreamingStarted,
    StreamingCompleted,
    FadeInBegun,
    FadeInEnded,
};

