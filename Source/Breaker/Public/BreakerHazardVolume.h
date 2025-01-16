#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EStatusEffectType.h"
#include "BreakerDamage.h"
#include "BreakerPawnLocalTriggerDelegate.h"
#include "OnComponentAppliedDamageDelegate.h"
#include "BreakerHazardVolume.generated.h"

class ABreakerPawn;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UBreakerHazardVolume : public UCapsuleComponent, public IBreakerPawnLocalTriggerDelegate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LoopDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimerFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimerInvalidationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerDamage DamageDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StatusTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatusEffectType StatusEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StatusEffectLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ABreakerPawn*, FTimerHandle> PlayerTimers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ABreakerPawn*, FTimerHandle> InvalidationTimers;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnComponentAppliedDamage OnComponentAppliedDamage;
    
    UBreakerHazardVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void InvalidateTimer(ABreakerPawn* InPawn, FTimerHandle Timer);
    
    UFUNCTION(BlueprintCallable)
    void DamagePawn(ABreakerPawn* InPawn);
    

    // Fix for true pure virtual functions not being implemented
};

