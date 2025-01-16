#pragma once
#include "CoreMinimal.h"
#include "AkActionOnEventType.h"
#include "EAkCurveInterpolation.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "EAudioVoiceType.h"
#include "CharacterAudioInterface.generated.h"

class UBreakerCharAudioDataBase;

UINTERFACE(Blueprintable)
class UCharacterAudioInterface : public UInterface {
    GENERATED_BODY()
};

class ICharacterAudioInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopTelegraphSFX_ByCurrentActiveAttack(const FName SocketName, const AkActionOnEventType OnStopActionType, const int32 OnStopFadeOutMs, const EAkCurveInterpolation OnStopFadeOutCurve);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayVoiceSFX_ByCurrentActiveAttack(const float Delay);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayVoiceSFX_ByAttackName(const float Delay, const FName AttackName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayVoiceSFX(const float Delay, const FGameplayTag GameplayTag, const EAudioVoiceType VoiceType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayTelegraphSFX_ByCurrentActiveAttack(const float Delay, const FName SocketName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayTelegraphSFX_ByAttackName(const float Delay, const FName SocketName, const FName AttackName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayMuzzleFlashSFX_ByCurrentActiveAttack(const float Delay, const bool bUseMainSFX_Socket);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayMuzzleFlashSFX_ByAttackName(const float Delay, const bool bUseMainSFX_Socket, const FName AttackName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayMuzzleFlashSFX(const float Delay, const bool bUseMainSFX_Socket, const bool bOverrideDefaultGameplayTag, const FGameplayTag GameplayTagOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetCharacterNormalizedSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBreakerCharAudioDataBase* GetCharacterAudioData();
    
};

