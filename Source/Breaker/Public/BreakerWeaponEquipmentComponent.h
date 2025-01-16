#pragma once
#include "CoreMinimal.h"
#include "BreakerEquipmentComponent.h"
#include "BreakerWeaponEquipmentComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBreakerWeaponEquipmentComponent : public UBreakerEquipmentComponent {
    GENERATED_BODY()
public:
    UBreakerWeaponEquipmentComponent(const FObjectInitializer& ObjectInitializer);

};

