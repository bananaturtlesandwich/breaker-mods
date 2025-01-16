#pragma once
#include "CoreMinimal.h"
#include "OnBreakerStatusEffectChangedDelegate.generated.h"

class AActor;
class ABreakerStatusEffect;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBreakerStatusEffectChanged, AActor*, Victim, ABreakerStatusEffect*, Effect);

