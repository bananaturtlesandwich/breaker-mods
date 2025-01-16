#pragma once
#include "CoreMinimal.h"
#include "DangerMeterComponent_DangerDifficultyIncreasedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDangerMeterComponent_DangerDifficultyIncreased, int32, Increase, int32, NewDangerDifficulty, int32, OldDangerDifficulty);

