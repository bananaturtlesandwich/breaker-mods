#pragma once
#include "CoreMinimal.h"
#include "AkSpatialAudioVolume.h"
#include "GameplayTagContainer.h"
#include "SpatialAudioInterface.h"
#include "BreakerAkSpatialAudioVolume.generated.h"

UCLASS(Blueprintable)
class BREAKER_API ABreakerAkSpatialAudioVolume : public AAkSpatialAudioVolume, public ISpatialAudioInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetLocalPlayerIndoorAudioState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsolateOverlappingAudioMultiPositions;
    
public:
    ABreakerAkSpatialAudioVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer GetSpatialAudioGameplayTags_Implementation();
    
    UFUNCTION(BlueprintCallable)
    bool CanSetLocalPlayerIndoorAudioState_Implementation();
    
    UFUNCTION(BlueprintCallable)
    bool CanIsolateOverlappingAudioMultiPositions_Implementation();
    

    // Fix for true pure virtual functions not being implemented
};

