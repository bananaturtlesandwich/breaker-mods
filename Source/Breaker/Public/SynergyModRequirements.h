#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SynergyModRequirements.generated.h"

USTRUCT(BlueprintType)
struct FSynergyModRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> RequiredEffects;
    
    BREAKER_API FSynergyModRequirements();
};

