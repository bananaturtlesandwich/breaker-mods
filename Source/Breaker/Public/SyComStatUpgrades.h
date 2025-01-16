#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SyComStatUpgrades.generated.h"

USTRUCT(BlueprintType)
struct FSyComStatUpgrades {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> SyComStatUpgrades;
    
    BREAKER_API FSyComStatUpgrades();
};

