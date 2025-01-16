#pragma once
#include "CoreMinimal.h"
#include "EBreakerCameraType.generated.h"

UENUM(BlueprintType)
enum class EBreakerCameraType : uint8 {
    Default,
    AimOverShoulder,
    Interior,
    Loadout,
    ZLock,
    Pause,
    NoLag,
    AmpMacroAimCamera,
};

