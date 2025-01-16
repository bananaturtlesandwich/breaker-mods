#pragma once
#include "CoreMinimal.h"
#include "DangerMeterComponent_DangerDifficultyDecreasedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDangerMeterComponent_DangerDifficultyDecreased, int32, Decrease, int32, NewDangerDifficulty, int32, OldDangerDifficulty);

