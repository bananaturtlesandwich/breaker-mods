#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GearStatAffixItem.generated.h"

USTRUCT(BlueprintType)
struct FGearStatAffixItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StatTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StatValue;
    
    BREAKER_API FGearStatAffixItem();
};

