#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CombatEffectCreationContext.h"
#include "BreakerCombatEffect.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable)
class BREAKER_API UBreakerCombatEffect : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxStackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifetimeExpiration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreActorBasedTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceExpiration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetLifetimeOnStackChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* OwningActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* InstigatingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsOwnerLocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInstigatorLocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LifetimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 StackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCombatEffectCreationContext CreationContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bForceExpired;
    
public:
    UBreakerCombatEffect();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool TriggerSpecialEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEffectTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEffectStackChanged(int32 PreviousCount, int32 NewCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEffectDeactivated(bool bExpiredNormally);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEffectConfigure();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEffectActivated();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExpired() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasEffectExpired() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ForceExpire();
    
};

