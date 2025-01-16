#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EnemyStaggerInfo.generated.h"

UCLASS(Blueprintable)
class BREAKER_API UEnemyStaggerInfo : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThresholdAsAPercentOfHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSpentStaggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBeforeStaggerDecays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeForStaggerToDecayCompletely;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NetworkInterpolationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MP_ThresholdAsAPercentOfHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MP_TimeSpentStaggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MP_DelayBeforeStaggerDecays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MP_TimeForStaggerToDecayCompletely;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MP_LightDamageModifier;
    
    UEnemyStaggerInfo();

    UFUNCTION(BlueprintCallable)
    float GetTimeSpentStaggered(int32 NumPlayers);
    
    UFUNCTION(BlueprintCallable)
    float GetTimeForStaggerToDecayCompletely(int32 NumPlayers);
    
    UFUNCTION(BlueprintCallable)
    float GetThresholdAsAPercentOfHealth(int32 NumPlayers);
    
    UFUNCTION(BlueprintCallable)
    float GetDelayBeforeStaggerDecays(int32 NumPlayers);
    
};

