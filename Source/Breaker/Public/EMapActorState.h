#pragma once
#include "CoreMinimal.h"
#include "EMapActorState.generated.h"

UENUM(BlueprintType)
enum class EMapActorState : uint8 {
    Uninitialized,
    Initialized,
    Triggered,
    Discovered,
    State3,
};

