#pragma once
#include "CoreMinimal.h"
#include "AkAcousticPortal.h"
#include "GameplayTagContainer.h"
#include "SpatialAudioInterface.h"
#include "BreakerAkAcousticPortal.generated.h"

UCLASS(Blueprintable)
class BREAKER_API ABreakerAkAcousticPortal : public AAkAcousticPortal, public ISpatialAudioInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
public:
    ABreakerAkAcousticPortal(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer GetSpatialAudioGameplayTags_Implementation();
    
    UFUNCTION(BlueprintCallable)
    bool CanSetLocalPlayerIndoorAudioState_Implementation();
    
    UFUNCTION(BlueprintCallable)
    bool CanIsolateOverlappingAudioMultiPositions_Implementation();
    

    // Fix for true pure virtual functions not being implemented
};

