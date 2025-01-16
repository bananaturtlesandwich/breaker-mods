#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GearHolobyteLevelUpgrades.generated.h"

USTRUCT(BlueprintType)
struct FGearHolobyteLevelUpgrades {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> HolobyteDropPercents;
    
    BREAKER_API FGearHolobyteLevelUpgrades();
};

