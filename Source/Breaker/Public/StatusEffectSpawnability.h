#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EEquipmentSpawnability.h"
#include "StatusEffectSpawnability.generated.h"

USTRUCT(BlueprintType)
struct FStatusEffectSpawnability {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquipmentSpawnability Spawnability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> Tags;
    
    BREAKER_API FStatusEffectSpawnability();
};

