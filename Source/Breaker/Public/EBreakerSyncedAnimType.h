#pragma once
#include "CoreMinimal.h"
#include "EBreakerSyncedAnimType.generated.h"

UENUM(BlueprintType)
enum class EBreakerSyncedAnimType : uint8 {
    SyncFromStart,
    SyncToEnd,
};

