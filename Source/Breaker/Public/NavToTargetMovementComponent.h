#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/InterpToMovementComponent.h"
#include "OnNavTargetChangedDelegate.h"
#include "OnNavToTargetMovedDelegate.h"
#include "NavToTargetMovementComponent.generated.h"

class AActor;
class UNavToTargetFilter;
class UNavigationPath;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UNavToTargetMovementComponent : public UInterpToMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TetherDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoTargetOnPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoTargetRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoTargetRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavigationUpdateRefreshRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClientsCanPredictivelyAutoTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> TargetClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> AutoTargetObjectTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UNavToTargetFilter*> TargetFilters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementFadeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeedBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PassiveSlowdownFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocitySnappingFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PathLookahead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoMovementMode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNavTargetChanged OnTargetChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNavToTargetMoved OnNavToTargetMoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeStopped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StoppedSpeedThreshold;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDrawNavigationPathOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugDrawRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* ActiveNavigationTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* ActiveNavigationTargetComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NetSyncPosition, meta=(AllowPrivateAccess=true))
    FVector NetSyncPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NetSyncPosition, meta=(AllowPrivateAccess=true))
    FVector NetSyncVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNavigationPath* NavigationPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ComputedVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RealTravelThisFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RealSpeedThisFrame;
    
public:
    UNavToTargetMovementComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateNavigationPathToTarget();
    
    UFUNCTION(BlueprintCallable)
    void StopDebugDrawing();
    
    UFUNCTION(BlueprintCallable)
    void StopAutoTargetting();
    
    UFUNCTION(BlueprintCallable)
    void StartDebugDrawing();
    
    UFUNCTION(BlueprintCallable)
    void StartAutoTargetting();
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationTarget(AActor* NewTarget, USceneComponent* SubComponent);
    
    UFUNCTION(BlueprintCallable)
    void PollForNearbyTargets(float SphereOverlapRadius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, TArray<UClass*> ActorClassFilters, const TArray<AActor*>& ActorsToIgnore);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_NetSyncPosition();
    
public:
    UFUNCTION(BlueprintCallable)
    void NavigateToNearbyTarget();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MULTICAST_TransmitPositionSync(FVector ServerPosition, FVector ServerVelocity);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MULTICAST_BroadcastNewNavigationTarget(AActor* TargetActor, USceneComponent* TargetComp);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTargetLocation() const;
    
    UFUNCTION(BlueprintCallable)
    void AutoPollForNearbyTargets();
    
};

