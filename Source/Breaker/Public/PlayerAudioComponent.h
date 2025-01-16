#pragma once
#include "CoreMinimal.h"
#include "Attribute.h"
#include "BreakerDamage.h"
#include "CharacterAudioInterface.h"
#include "ECombatActionResult.h"
#include "ECombatActionRoute.h"
#include "ParryEventPayload.h"
#include "PlayerComponentBase.h"
#include "SummonedCompanionInfo.h"
#include "PlayerAudioComponent.generated.h"

class AActor;
class ABeacon;
class ABreakerPawn;
class APawn;
class IAttributeContainerInterface;
class UAttributeContainerInterface;
class IBreakerMovementDelegate;
class UBreakerMovementDelegate;
class UAkRtpc;
class UAnimInstance;
class UBreakerEquipmentComponent;
class UBreakerInteractableComponent;
class UBreakerPawnMoveManager;
class UBreakerStateMachineComponent;
class UCharacterCombatComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UPlayerAudioComponent : public UPlayerComponentBase, public ICharacterAudioInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABeacon* RelevantEliteBeacon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInsideEliteZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsOwnerPointOfViewPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EliteBeaconAudioTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* DistanceToNearestBiomeRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* DistanceToExtractionZoneRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* DistanceToMiniBossRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* DistanceToEliteRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* ExtractionProgressRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* SpeedNormalizedRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CachedNormalizedVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CachedMaxSpeed;
    
public:
    UPlayerAudioComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSubscribedToPrimaryStatus(UBreakerStateMachineComponent* PrimaryStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSubscribedToMovementManager(UBreakerPawnMoveManager* MoveManager);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStatusChanged(FName PreviousState, FName NextState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShieldBreak();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShieldAttributeValueFilled(const TScriptInterface<IAttributeContainerInterface>& AttributeContainer, const FAttribute& Attribute, const FAttribute& PreviousAttribute);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRevived();
    
    UFUNCTION(BlueprintCallable)
    void OnMovementModeChanged_Internal(ABreakerPawn* Owner, TScriptInterface<IBreakerMovementDelegate> PreviousState, TScriptInterface<IBreakerMovementDelegate> CurrentState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMovementModeChanged(ABreakerPawn* Owner, const TScriptInterface<IBreakerMovementDelegate>& PreviousState, const TScriptInterface<IBreakerMovementDelegate>& CurrentState);
    
    UFUNCTION(BlueprintCallable)
    void OnListenerPointOfViewPawnChanged(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLandImpact(float FallDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJumped(int32 JumpNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInteractableTooExpensive(UBreakerInteractableComponent* InteractableComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoverboardJumpTrick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEquipmentCooldownDenied(const UBreakerEquipmentComponent* EquippedComponent, ECombatActionRoute ActionRoute, ECombatActionResult ActionResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEquipmentActivated(const UBreakerEquipmentComponent* EquippedComponent, ECombatActionRoute ActionRoute, ECombatActionResult ActionResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDefeated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamageReceived(ABreakerPawn* Receiver, AActor* Instigator, FBreakerDamage Damage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamageInflicted(ABreakerPawn* Instigator, AActor* Receiver, FBreakerDamage Damage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCompanionUnregistered(UCharacterCombatComponent* CombatComponent, const FSummonedCompanionInfo& CompanionInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCompanionRegistered(UCharacterCombatComponent* CombatComponent, const FSummonedCompanionInfo& CompanionInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBatteryAttributeValueChanged(const TScriptInterface<IAttributeContainerInterface>& AttributeContainer, const FAttribute& Attribute, const FAttribute& PreviousAttribute);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAttackParried(const FParryEventPayload& ParryEventPayload);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnimInstanceChanged(AActor* Owner, UAnimInstance* OldAnimInstance, UAnimInstance* NewAnimInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAimCameraPushed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAimCameraPopped();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceToNearestBiome() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetCharacterNormalizedSpeed();
    

    // Fix for true pure virtual functions not being implemented
};

