#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ExplosionDelDelegate.generated.h"

class ABreakerPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FExplosionDel, ABreakerPawn*, Player, FVector, ExplosionLocation);

