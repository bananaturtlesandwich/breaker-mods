#include "BreakerPawnMoveManager.h"
#include "Net/UnrealNetwork.h"

UBreakerPawnMoveManager::UBreakerPawnMoveManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FixedTime = 0.02f;
    this->RotationDampSeconds = 0.20f;
    this->WallNormalMode = EWallNormalMovementMode::FaceIntoWall;
    this->WallQueryDist = 60.00f;
    this->WallSlipMaxFallSpeed = 1000.00f;
    this->RagdollIFramesDuration = 0.50f;
    this->bSlopeAlignedRootMotion = false;
    this->BaselineRootMotionSlopeAlignment = 0.00f;
    this->bUseMontageCurveForSlopeAlignment = false;
    this->SlopeAlignmentMontageCurveName = TEXT("SlopeAlignment");
    this->bUseInputCancelForSlopeAlignment = false;
    this->bHasWallNormal = false;
    this->RepLocalLag = 0.00f;
    this->MoveSampleRepTime = 0.05f;
    this->OwningPawn = NULL;
}

void UBreakerPawnMoveManager::TryRagdoll(FVector Impulse) {
}

bool UBreakerPawnMoveManager::TryGroundPound(UAnimMontage* InAnim) {
    return false;
}

bool UBreakerPawnMoveManager::TryGrappleTo(const FVector& InLocation, UAnimMontage* InAnim) {
    return false;
}

void UBreakerPawnMoveManager::SetRotation_Local(const FQuat& FacingRotation) {
}

void UBreakerPawnMoveManager::SetMovementToNone(ELevelState NewLevel, ELevelState OldLevel) {
}

void UBreakerPawnMoveManager::SetMovementSample_Server_Implementation(const FMovementState& Sample, float LocalTime) {
}

void UBreakerPawnMoveManager::SetMovementMode_Server_Implementation(FMovementModeHandle Handle) {
}

void UBreakerPawnMoveManager::Server_RepMovementSample_Implementation(const FMovementState& Sample, float LocalTime) {
}

void UBreakerPawnMoveManager::ReturnToNormalMovement_NoArgs() {
}

void UBreakerPawnMoveManager::ReturnToNormalMovement(EMovementModeTransitionTag Tag) {
}

void UBreakerPawnMoveManager::OnRep_MovementModeHandle() {
}

void UBreakerPawnMoveManager::Multicast_MovementSample_Implementation(const FMovementState& Sample) {
}

float UBreakerPawnMoveManager::ModeTimeElapsed() const {
    return 0.0f;
}

float UBreakerPawnMoveManager::ModeDilatedTimeElapsed() const {
    return 0.0f;
}

bool UBreakerPawnMoveManager::IsRagdoll() const {
    return false;
}

bool UBreakerPawnMoveManager::IsGroundPounding() const {
    return false;
}

bool UBreakerPawnMoveManager::IsGrounded() const {
    return false;
}

bool UBreakerPawnMoveManager::IsGrappling() const {
    return false;
}

void UBreakerPawnMoveManager::IgnoreComponentWhenMoving(UPrimitiveComponent* Component, bool bShouldIgnore) {
}

void UBreakerPawnMoveManager::IgnoreActorWhenMoving(AActor* Actor, bool bShouldIgnore) {
}

bool UBreakerPawnMoveManager::HasBoundMovement() const {
    return false;
}

FVector UBreakerPawnMoveManager::GroundNormal() const {
    return FVector{};
}

float UBreakerPawnMoveManager::GetVerticalSpeed() const {
    return 0.0f;
}

FVector UBreakerPawnMoveManager::GetUpDirection() const {
    return FVector{};
}

FVector UBreakerPawnMoveManager::GetTravelVelocity() const {
    return FVector{};
}

FVector UBreakerPawnMoveManager::GetTravelDirection() const {
    return FVector{};
}

FVector UBreakerPawnMoveManager::GetSampledVelocity() const {
    return FVector{};
}

FVector UBreakerPawnMoveManager::GetSampledAngularVelocity() const {
    return FVector{};
}

FVector UBreakerPawnMoveManager::GetKinematicVelocity() const {
    return FVector{};
}

FTransform UBreakerPawnMoveManager::GetKinematicTransform() const {
    return FTransform{};
}

FRotator UBreakerPawnMoveManager::GetKinematicRotation() const {
    return FRotator{};
}

FVector UBreakerPawnMoveManager::GetKinematicLocation() const {
    return FVector{};
}

FVector UBreakerPawnMoveManager::GetGroundVelocity() const {
    return FVector{};
}

FVector UBreakerPawnMoveManager::GetGroundDirection() const {
    return FVector{};
}

float UBreakerPawnMoveManager::GetFixedTime() const {
    return 0.0f;
}

FVector UBreakerPawnMoveManager::GetDirection() const {
    return FVector{};
}

TScriptInterface<IBreakerMovementDelegate> UBreakerPawnMoveManager::GetCurrentMovementMode() {
    return NULL;
}

TArray<UPrimitiveComponent*> UBreakerPawnMoveManager::CopyArrayOfMoveIgnoreComponents() {
    return TArray<UPrimitiveComponent*>();
}

TArray<AActor*> UBreakerPawnMoveManager::CopyArrayOfMoveIgnoreActors() {
    return TArray<AActor*>();
}

void UBreakerPawnMoveManager::ClearMovementModifier(UObject* Caller) {
}

void UBreakerPawnMoveManager::ClearMoveIgnoreComponents() {
}

void UBreakerPawnMoveManager::ClearMoveIgnoreActors() {
}

bool UBreakerPawnMoveManager::CanGroundPound() const {
    return false;
}

bool UBreakerPawnMoveManager::CanGrapple() const {
    return false;
}

void UBreakerPawnMoveManager::BindWithAdditionalMovement(const FVector& AdditionalMovement) {
}

void UBreakerPawnMoveManager::BindMovement(bool bIsBound) {
}

void UBreakerPawnMoveManager::AdjustVelocity_Client_Implementation(FVector NewVelocity) {
}

void UBreakerPawnMoveManager::AddMovementModifier(UObject* Caller, EBreakerPawnMovementModifier Modifier) {
}

void UBreakerPawnMoveManager::AddEnvironmentDisplacer(USceneComponent* Component) {
}

void UBreakerPawnMoveManager::AddEnvironmentDisplacement(FVector EnvironmentDisplacement) {
}

void UBreakerPawnMoveManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBreakerPawnMoveManager, RepMoveModeHandle);
    DOREPLIFETIME(UBreakerPawnMoveManager, RepLocalLag);
}


