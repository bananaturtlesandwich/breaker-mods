#pragma once
#include "CoreMinimal.h"
#include "OnBasicProjectileImpactedTargetsDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBasicProjectileImpactedTargets, TArray<AActor*>, HitTargets);

