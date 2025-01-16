#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ProjectileBatchImpactEventDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FProjectileBatchImpactEvent, const FHitResult&, Hit, UObject*, UserData);

