#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CombatEffectCreationContext.generated.h"

USTRUCT(BlueprintType)
struct FCombatEffectCreationContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EffectLevel;
    
    BREAKER_API FCombatEffectCreationContext();
};

