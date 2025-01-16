#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnComponentAppliedDamageDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnComponentAppliedDamage, FVector, DamageLocation);

