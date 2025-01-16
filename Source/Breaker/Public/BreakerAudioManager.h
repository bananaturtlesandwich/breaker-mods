#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "BreakerAudioManager.generated.h"

class UAkAudioEvent;
class UAkStateValue;
class ULocalPlayer;

UCLASS(Abstract, Blueprintable)
class BREAKER_API UBreakerAudioManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMultiPositionAudioAllowed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<bool, UAkAudioEvent*> ApplicationMuteEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UAkStateValue*> InputTypeStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FadeOutAll_SFX_Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FadeInAll_SFX_Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UAkAudioEvent*> AudioMixDebugMuteAndResetActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UAkAudioEvent*> AudioMixDebugSoloActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AudioMixDebugActionHelp;
    
public:
    UBreakerAudioManager();

private:
    UFUNCTION(BlueprintCallable)
    void SetNewInputTypeAudioState(const FName& NewInputMethod);
    
public:
    UFUNCTION(BlueprintCallable)
    int32 PlayUI_AudioEvent_2D(UAkAudioEvent* AudioEvent);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnLocalPlayerAdded(ULocalPlayer* LocalPlayer);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnInputMethodChanged(ECommonInputType InputType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FadeOutAllSFX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FadeInAllSFX() const;
    
};

