#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EDamageDetail.h"
#include "BreakerStatusEffect.generated.h"

class ABreakerPawn;
class ACMCharBase;
class UTexture2D;

UCLASS(Abstract, Blueprintable)
class BREAKER_API ABreakerStatusEffect : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageDetail PrimaryDamageDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* EffectIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor PrimaryColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor SecondaryColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepEffectAliveUntilDeadlineMet;
    
    ABreakerStatusEffect(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResetDeadline();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateEffectProgressPlayer(ABreakerPawn* Player, float NormalizedElapsedTime, float ElapsedTime, float RemainingTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateEffectProgress(ACMCharBase* Pawn, float NormalizedElapsedTime, float ElapsedTime, float RemainingTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRemoveEffectPlayer(ABreakerPawn* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRemoveEffect(ACMCharBase* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnApplyEffectPlayer(ABreakerPawn* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnApplyEffect(ACMCharBase* Pawn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTimedOut() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACMCharBase* GetCharacterPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerPawn* GetBreakerPawn() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceExpire();
    
};

