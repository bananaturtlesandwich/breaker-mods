#pragma once
#include "CoreMinimal.h"
#include "DamageGroup.h"
#include "GroupDamageResolvedDelDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGroupDamageResolvedDel, FDamageGroup, DamageGroup);

