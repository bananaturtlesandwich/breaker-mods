#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BreakerPickShotVectorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_SevenParams(FBreakerPickShotVector, FRandomStream, RNG, FVector, Forward, FVector, Right, int32, BulletNum, int32, TotalBullets, bool&, Success, FVector&, Result);

