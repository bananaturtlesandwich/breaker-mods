#pragma once
#include "CoreMinimal.h"
#include "ShieldedTargetsUpdateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShieldedTargetsUpdate, TArray<AActor*>, Targets);

