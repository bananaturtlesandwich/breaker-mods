#pragma once
#include "CoreMinimal.h"
#include "BreakerEquipmentComponent.h"
#include "BreakerHolobyteEquipmentComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBreakerHolobyteEquipmentComponent : public UBreakerEquipmentComponent {
    GENERATED_BODY()
public:
    UBreakerHolobyteEquipmentComponent(const FObjectInitializer& ObjectInitializer);

};

