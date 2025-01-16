#include "AttackTargetComponent.h"
#include "Net/UnrealNetwork.h"

UAttackTargetComponent::UAttackTargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ScoreBias = 0.00f;
    this->bIsBoss = false;
    this->bIsTargetable = true;
    this->ThreatRadius = 2500.00f;
    this->bAimVolumeIsCapsule = false;
    this->AimRadius = 100.00f;
    this->AimCapsuleHalfHeight = 200.00f;
    this->Status = EAttackTargetStatus::Idle;
    this->bIsAttacking = false;
    this->bIsOffScreenAndInRange = false;
    this->bIsAimAssistTarget = false;
}

bool UAttackTargetComponent::UseAimCapsuleVolume() const {
    return false;
}

void UAttackTargetComponent::StopAttacking() {
}

void UAttackTargetComponent::SetObjectIsLockedOnToMe(UObject* Object, bool bLockedOn) {
}

void UAttackTargetComponent::SetIsAttackingForSeconds(float Seconds, AActor* Victim) {
}

void UAttackTargetComponent::SetIsAttacking(AActor* Victim) {
}

void UAttackTargetComponent::RemoveCustomEvaluatorFocus(UObject* Evaluator) {
}

void UAttackTargetComponent::MarkCustomEvaluatorFocus(UObject* Evaluator) {
}

bool UAttackTargetComponent::IsTargetable() const {
    return false;
}

bool UAttackTargetComponent::IsObjectLockedOnToMe(UObject* Object) const {
    return false;
}

bool UAttackTargetComponent::IsAttacking() const {
    return false;
}

bool UAttackTargetComponent::IsAnyObjectLockedOnToMe() const {
    return false;
}

FVector UAttackTargetComponent::GetTargetVelocity() {
    return FVector{};
}

FVector UAttackTargetComponent::GetTargetLocation() const {
    return FVector{};
}

FVector UAttackTargetComponent::GetAimPivotLocation() const {
    return FVector{};
}

FQuat UAttackTargetComponent::GetAimCapsuleRotation() const {
    return FQuat{};
}

void UAttackTargetComponent::GetAimCapsuleCapPositions(FVector& OutCap1, FVector& OutCap2) const {
}

UAttackTargetTriageComponent* UAttackTargetComponent::FindTriageComponent() const {
    return NULL;
}

void UAttackTargetComponent::CustomEvaluatorStateChanged(UObject* Evaluator) {
}

void UAttackTargetComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAttackTargetComponent, bIsAttacking);
    DOREPLIFETIME(UAttackTargetComponent, AttackVictim);
}


