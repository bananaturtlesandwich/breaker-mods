#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "BreakerEnemyAudioEventDataContainer.h"
#include "BreakerEnemyAudioData.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class BREAKER_API UBreakerEnemyAudioData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MaterialFootstepIntensityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateVelocityOnTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FBreakerEnemyAudioEventDataContainer> AttackAudioEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FBreakerEnemyAudioEventDataContainer> VoiceAudioEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FBreakerEnemyAudioEventDataContainer> FoleyAudioEvents;
    
    UBreakerEnemyAudioData();

};

