#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Curves/CurveFloat.h"
#include "BreakerDamage.h"
#include "ClientProjectileDelegateDelegate.h"
#include "EClientProjectileHomingStyle.h"
#include "PoolInterface.h"
#include "ClientProjectile.generated.h"

class UAttackTargetComponent;
class UBreakerCombatEffectComponent;
class UHitStopComponent;
class UProjectileMovementComponent;
class USceneComponent;
class UShapeComponent;

UCLASS(Blueprintable)
class BREAKER_API AClientProjectile : public AActor, public IPoolInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClientProjectileDelegate OnInitFromPoolEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClientProjectileDelegate OnRetireToPoolEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasDetonated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerDamage DamageTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* CollisionShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAttackTargetComponent* AttackTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakerCombatEffectComponent* BreakerGameplayEffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitStopComponent* HitStopComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileMovementComponent* OptionalProjectileMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseProjectileMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> IgnoredActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProjectileCanPhaseAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasThreatIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDetonateOnLifetimeExpire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostDetonateLingerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHittingActorCausesDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionSweepInflation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinearAccel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialBurstAccel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InitialBurstVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HomingOffsetWorldSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CoreVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MuzzleForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EClientProjectileHomingStyle HomingStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HomingAccel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StopHomingIfHeadedAwayFromTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdhereToGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundHeightIdeal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundSearchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> HomingTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve DamageFalloffCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseDamageModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageFingerprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceTravelled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOrientToVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDeflected;
    
    AClientProjectile(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TryHandleDisablingDamage(AActor* OtherActor, const FBreakerDamage& Damage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TryHandleDeflectingDamage(AActor* OtherActor, const FBreakerDamage& Damage);
    
    UFUNCTION(BlueprintCallable)
    void SetLifetime(float newLifetime);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_PostDetonate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnDetonated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPooled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDetonated() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HittingActorDetonatesProjectile(AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFullyDetonated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleChainProjectile(const FVector& TargetLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Detonate(bool bQuiet);
    
    UFUNCTION(BlueprintCallable)
    FBreakerDamage ConstructDamageAgainstActor(AActor* Victim);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeDeflected() const;
    

    // Fix for true pure virtual functions not being implemented
};

