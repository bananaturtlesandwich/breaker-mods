#pragma once
#include "CoreMinimal.h"
#include "BreakerDamage.h"
#include "CMCharDepictDamageEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCMCharDepictDamageEvent, const AActor*, Attacker, const FBreakerDamage&, InDamage, const bool, bLocallySourcedDamage);

