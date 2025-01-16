#pragma once
#include "CoreMinimal.h"
#include "BreakerWeaponProp.h"
#include "BreakerEquipmentProp.generated.h"

UCLASS(Blueprintable)
class BREAKER_API ABreakerEquipmentProp : public ABreakerWeaponProp {
    GENERATED_BODY()
public:
    ABreakerEquipmentProp(const FObjectInitializer& ObjectInitializer);

};

