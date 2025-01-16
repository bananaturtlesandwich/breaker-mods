#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MultiplayerScalingDifficultyInfo.h"
#include "MultiplayerScalingByGameplayTag.generated.h"

USTRUCT(BlueprintType)
struct FMultiplayerScalingByGameplayTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery EnemyConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMultiplayerScalingDifficultyInfo> ScalingDifficultyInfoList;
    
    BREAKER_API FMultiplayerScalingByGameplayTag();
};

