#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Curves/CurveFloat.h"
#include "BreakerPawnComponentInterface.h"
#include "BreakerPawnOnMovementModeChangedDelegate.h"
#include "CharacterMovementParams.h"
#include "EBreakerPawnMovementModifier.h"
#include "EDashType.h"
#include "ELevelState.h"
#include "EMovementModeTransitionTag.h"
#include "EWallNormalMovementMode.h"
#include "MovementModeHandle.h"
#include "MovementState.h"
#include "SlideCapsule.h"
#include "BreakerPawnMoveManager.generated.h"

class AActor;
class ABreakerPawn;
class IBreakerMovementDelegate;
class UBreakerMovementDelegate;
class UAnimMontage;
class UObject;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UBreakerPawnMoveManager : public UActorComponent, public IBreakerPawnComponentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FixedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationDampSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlideCapsule Capsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterMovementParams MovementParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SprintRampUpCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWallNormalMovementMode WallNormalMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallQueryDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallSlipMaxFallSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollIFramesDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSlopeAlignedRootMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaselineRootMotionSlopeAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve RootMotionSlopeAlignmentCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMontageCurveForSlopeAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlopeAlignmentMontageCurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseInputCancelForSlopeAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve InputCancelSlopeAlignmentCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDashType, bool> DashTypeHasIFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasWallNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector WallNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector WallLocation;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, ReplicatedUsing=OnRep_MovementModeHandle, meta=(AllowPrivateAccess=true))
    FMovementModeHandle RepMoveModeHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMovementState RepSample;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float RepLocalLag;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerPawnOnMovementModeChanged EventOnMovementModeChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoundAdditionalMovement;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSampleRepTime;
    
private:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> MoveIgnoreActors;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> MoveIgnoreComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABreakerPawn* OwningPawn;
    
public:
    UBreakerPawnMoveManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TryRagdoll(FVector Impulse);
    
    UFUNCTION(BlueprintCallable)
    bool TryGroundPound(UAnimMontage* InAnim);
    
    UFUNCTION(BlueprintCallable)
    bool TryGrappleTo(const FVector& InLocation, UAnimMontage* InAnim);
    
    UFUNCTION(BlueprintCallable)
    void SetRotation_Local(const FQuat& FacingRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementToNone(ELevelState NewLevel, ELevelState OldLevel);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetMovementSample_Server(const FMovementState& Sample, float LocalTime);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetMovementMode_Server(FMovementModeHandle Handle);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_RepMovementSample(const FMovementState& Sample, float LocalTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void ReturnToNormalMovement_NoArgs();
    
    UFUNCTION(BlueprintCallable)
    void ReturnToNormalMovement(EMovementModeTransitionTag Tag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_MovementModeHandle();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_MovementSample(const FMovementState& Sample);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ModeTimeElapsed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ModeDilatedTimeElapsed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRagdoll() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGroundPounding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrounded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrappling() const;
    
    UFUNCTION(BlueprintCallable)
    void IgnoreComponentWhenMoving(UPrimitiveComponent* Component, bool bShouldIgnore);
    
    UFUNCTION(BlueprintCallable)
    void IgnoreActorWhenMoving(AActor* Actor, bool bShouldIgnore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBoundMovement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GroundNormal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVerticalSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetUpDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTravelVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTravelDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSampledVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSampledAngularVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetKinematicVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetKinematicTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetKinematicRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetKinematicLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetGroundVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetGroundDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFixedTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TScriptInterface<IBreakerMovementDelegate> GetCurrentMovementMode();
    
    UFUNCTION(BlueprintCallable)
    TArray<UPrimitiveComponent*> CopyArrayOfMoveIgnoreComponents();
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> CopyArrayOfMoveIgnoreActors();
    
    UFUNCTION(BlueprintCallable)
    void ClearMovementModifier(UObject* Caller);
    
    UFUNCTION(BlueprintCallable)
    void ClearMoveIgnoreComponents();
    
    UFUNCTION(BlueprintCallable)
    void ClearMoveIgnoreActors();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanGroundPound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanGrapple() const;
    
    UFUNCTION(BlueprintCallable)
    void BindWithAdditionalMovement(const FVector& AdditionalMovement);
    
    UFUNCTION(BlueprintCallable)
    void BindMovement(bool bIsBound);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AdjustVelocity_Client(FVector NewVelocity);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddMovementModifier(UObject* Caller, EBreakerPawnMovementModifier Modifier);
    
    UFUNCTION(BlueprintCallable)
    void AddEnvironmentDisplacer(USceneComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void AddEnvironmentDisplacement(FVector EnvironmentDisplacement);
    

    // Fix for true pure virtual functions not being implemented
};

