#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EnemyAttackNameSFXTags.generated.h"

USTRUCT(BlueprintType)
struct FEnemyAttackNameSFXTags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AttackVoiceTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MuzzleFlashSFX_Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TelegraphSFX_Tag;
    
    BREAKER_API FEnemyAttackNameSFXTags();
};

