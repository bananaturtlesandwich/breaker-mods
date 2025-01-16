#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "BreakerAudioSurfaceSounds.h"
#include "BreakerAudioTakeDamage.h"
#include "BreakerCharAudioDataBase.generated.h"

class UBreakerCharAudioPriority;

UCLASS(Blueprintable)
class BREAKER_API UBreakerCharAudioDataBase : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AudioConfigTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBreakerCharAudioPriority* AudioPriorityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SFX_AkComponentAttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VO_AkComponentAttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerAudioSurfaceSounds AudioSurfaceSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerAudioTakeDamage AudioTakeDamage;
    
    UBreakerCharAudioDataBase();

};

