#pragma once
#include "CoreMinimal.h"
#include "BreakerDamage.h"
#include "OnInflictedDamageDelegate.generated.h"

class AActor;
class ABreakerPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnInflictedDamage, ABreakerPawn*, Caller, AActor*, Victim, FBreakerDamage, Damage);

