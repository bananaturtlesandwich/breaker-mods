#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "Curves/CurveFloat.h"
#include "GameplayTagContainer.h"
#include "Attribute.h"
#include "BreakerDamage.h"
#include "BreakerPickShotVectorDelegate.h"
#include "BreakerProjectileEventDelegate.h"
#include "BreakerQueuedShotEventDelegate.h"
#include "BreakerShootEventDelegate.h"
#include "BreakerShootHitEventDelegate.h"
#include "DamageGroup.h"
#include "EBreakerRangedFireType.h"
#include "EClientProjectileHomingStyle.h"
#include "HitscanGunAutofireEnabledEventDelegate.h"
#include "HitscanGunChargeReleaseEventDelegate.h"
#include "HitscanGunChargeStartEventDelegate.h"
#include "HitscanGunChargeTickEventDelegate.h"
#include "HitscanGunEmptyReloadEventDelegate.h"
#include "HitscanGunEventDelegate.h"
#include "HitscanGunReloadEventDelegate.h"
#include "HitscanGunReloadTickEventDelegate.h"
#include "HitscanGunRepState.h"
#include "HitscanGunShotPacket.h"
#include "HitscanGunTriggerFailedEventDelegate.h"
#include "HitscanGunTriggerPressedEventDelegate.h"
#include "HitscanGunTriggerReleasedEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "HitscanGunComponent.generated.h"

class ABreakerWeaponProp;
class AClientProjectile;
class APawn;
class IAttributeContainerInterface;
class UAttributeContainerInterface;
class UAnimMontage;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UHitscanGunComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerPickShotVector OnPickShotVector;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerShootEvent OnShoot;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerShootEvent OnTracer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerShootHitEvent OnHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitscanGunEvent OnMiss;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerQueuedShotEvent OnQueuedShot;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitscanGunTriggerPressedEvent OnTriggerPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitscanGunTriggerReleasedEvent OnTriggerReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitscanGunTriggerFailedEvent OnTriggerFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitscanGunAutofireEnabledEvent OnAutofireEnabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitscanGunChargeStartEvent OnChargeStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitscanGunChargeTickEvent OnChargeTick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitscanGunChargeReleaseEvent OnChargeRelease;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerProjectileEvent OnProjectileSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitscanGunEvent OnShotVolleyComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitscanGunEvent OnAmmoExhausted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitscanGunEvent OnAmmoClipExhausted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitscanGunEmptyReloadEvent OnReloadEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitscanGunReloadEvent OnReloadComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitscanGunReloadTickEvent OnReloadTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReloadTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmmoClipSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BatteryDrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpreadShots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpreadPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BurstShots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinShotTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenBurstShots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WideRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalSpreadFlatness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve DamageFalloffCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimRecoil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AClientProjectile> OptionalProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideProjectileSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EClientProjectileHomingStyle OverrideProjectileHomingStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideProjectileHomingAccel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerDamage DamageInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChainRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowDamageFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsesChaining;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasUnlimitedAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PendingRecoil;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FHitscanGunRepState RepState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FDamageGroup> DamageMap;
    
public:
    UHitscanGunComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool TryShootPlayerWeapon(bool BurstShot);
    
    UFUNCTION(BlueprintCallable)
    void TryShoot(FVector Origin, FVector Direction, bool bIsBurstShot, const FGameplayTag BatteryAttributeTag, const bool bUseMultiTrace, USceneComponent* HomingTarget);
    
    UFUNCTION(BlueprintCallable)
    void TryQueueSingleShot();
    
    UFUNCTION(BlueprintCallable)
    bool TryAutoReload();
    
    UFUNCTION(BlueprintCallable)
    void TriggerRelease();
    
    UFUNCTION(BlueprintCallable)
    void TriggerPress();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickRecoil(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetAutofireEnabled(bool bEnabled);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SERVER_TryFireProjectile(const FHitscanGunShotPacket& ShotPacket);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SERVER_TriggerPress(bool bIsPressed, const FHitscanGunRepState& OwnerRepState);
    
    UFUNCTION(BlueprintCallable)
    bool QueryAimingLocation(FVector& OutLocation, FHitResult& OutHit, UPARAM(Ref) FVector& MuzzleWorldLocation);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PerformRecoil();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnROFChanged(const TScriptInterface<IAttributeContainerInterface>& Interface, const FAttribute& Attribute, const FAttribute& PrevAttribute);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerUnEquipped(ABreakerWeaponProp* Weapon);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerEquipped(ABreakerWeaponProp* Weapon);
    
    UFUNCTION(BlueprintCallable)
    void OnMaxShotRangeChanged(const TScriptInterface<IAttributeContainerInterface>& Interface, const FAttribute& Attribute, const FAttribute& PrevAttribute);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnBatteryUpdated(const TScriptInterface<IAttributeContainerInterface>& Interface, const FAttribute& Attribute, const FAttribute& PrevAttribute);
    
    UFUNCTION(BlueprintCallable)
    void OnBatterySpentUpdated(const TScriptInterface<IAttributeContainerInterface>& Interface, const FAttribute& Attribute, const FAttribute& PrevAttribute);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAmmoChanged(const TScriptInterface<IAttributeContainerInterface>& Interface, const FAttribute& Attribute, const FAttribute& PrevAttribute);
    
    UFUNCTION(BlueprintCallable)
    void OnAccuracyChanged(const TScriptInterface<IAttributeContainerInterface>& Interface, const FAttribute& Attribute, const FAttribute& PrevAttribute);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MULTICAST_TriggerPress(bool bIsPressed);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MULTICAST_FireProjectile(const FHitscanGunShotPacket& ShotPacket);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeaponCharging() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReloading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReadyForShot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAutofireEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUnlimitedAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasInstantReload() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAmmo() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePlayerDamageLandedOrExpired(FBreakerDamage Damage, bool bLanded);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReloadTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReloadElapsedTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerWeaponProp* GetOwningWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetOwningPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNormalizedReloadTimeRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void GetMuzzleInfo(FVector& Location, FVector& Forward) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaximumAmmoClipAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaximumAmmoAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLastHitNormal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLastHitLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsTriggerPressed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    EBreakerRangedFireType GetFireType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDamageFalloffMultiplier(const float InDistance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentReloadTimeRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentReloadTimeElapsed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentAmmoClipAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentAmmoAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentAccuracyConeAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetChargeStats(float& Min, float& Max, bool& InCriticalRange) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChargePercentage() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DetermineBulletVector(FRandomStream& RNG, const FVector Forward, const FVector Right, int32 BulletNum, int32 TotalBullets, FVector& Result) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanReload() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_UpdateROF();
    
    UFUNCTION(BlueprintCallable)
    void BeginReload(const bool& bIgnoreTimer);
    
};

