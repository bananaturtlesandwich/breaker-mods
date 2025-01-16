#include "NavToTargetMovementComponent.h"
#include "Net/UnrealNetwork.h"

UNavToTargetMovementComponent::UNavToTargetMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TetherDistance = 50.00f;
    this->bAutoTargetOnPlay = false;
    this->AutoTargetRadius = 1000.00f;
    this->AutoTargetRate = 1.00f;
    this->NavigationUpdateRefreshRate = 0.20f;
    this->bClientsCanPredictivelyAutoTarget = false;
    this->Acceleration = 400.00f;
    this->MovementFadeDistance = 100.00f;
    this->MaxSpeed = 500.00f;
    this->MaxSpeedBlend = 0.30f;
    this->PassiveSlowdownFactor = 0.95f;
    this->VelocitySnappingFactor = 0.12f;
    this->PathLookahead = 1.10f;
    this->GravityMultiplier = 0.25f;
    this->bNoMovementMode = false;
    this->TimeStopped = 0.00f;
    this->StoppedSpeedThreshold = 5.00f;
    this->bDebugDrawNavigationPathOnBeginPlay = false;
    this->DebugDrawRate = 0.10f;
    this->ActiveNavigationTarget = NULL;
    this->ActiveNavigationTargetComp = NULL;
    this->NavigationPath = NULL;
    this->RealSpeedThisFrame = 0.00f;
}

void UNavToTargetMovementComponent::UpdateNavigationPathToTarget() {
}

void UNavToTargetMovementComponent::StopDebugDrawing() {
}

void UNavToTargetMovementComponent::StopAutoTargetting() {
}

void UNavToTargetMovementComponent::StartDebugDrawing() {
}

void UNavToTargetMovementComponent::StartAutoTargetting() {
}

void UNavToTargetMovementComponent::SetNavigationTarget(AActor* NewTarget, USceneComponent* SubComponent) {
}

void UNavToTargetMovementComponent::PollForNearbyTargets(float SphereOverlapRadius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, TArray<UClass*> ActorClassFilters, const TArray<AActor*>& ActorsToIgnore) {
}

void UNavToTargetMovementComponent::OnRep_NetSyncPosition() {
}

void UNavToTargetMovementComponent::NavigateToNearbyTarget() {
}

void UNavToTargetMovementComponent::MULTICAST_TransmitPositionSync_Implementation(FVector ServerPosition, FVector ServerVelocity) {
}

void UNavToTargetMovementComponent::MULTICAST_BroadcastNewNavigationTarget_Implementation(AActor* TargetActor, USceneComponent* TargetComp) {
}

FVector UNavToTargetMovementComponent::GetTargetLocation() const {
    return FVector{};
}

void UNavToTargetMovementComponent::AutoPollForNearbyTargets() {
}

void UNavToTargetMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UNavToTargetMovementComponent, ActiveNavigationTarget);
    DOREPLIFETIME(UNavToTargetMovementComponent, ActiveNavigationTargetComp);
    DOREPLIFETIME(UNavToTargetMovementComponent, NetSyncPosition);
    DOREPLIFETIME(UNavToTargetMovementComponent, NetSyncVelocity);
}


