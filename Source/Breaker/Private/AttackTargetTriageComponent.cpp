#include "AttackTargetTriageComponent.h"

UAttackTargetTriageComponent::UAttackTargetTriageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DistanceHysteresis = 25.00f;
    this->LockOnDistanceHysteresis = 2500.00f;
    this->ScoreWeightDistance = 1.00f;
    this->ScoreWeightDirection = 1.00f;
    this->StickTargetDistance = 800.00f;
    this->StickTargetAngle = 90.00f;
    this->MaxExecutionDistance = 600.00f;
    this->CameraTarget = NULL;
    this->StickTarget = NULL;
    this->ClosestTarget = NULL;
    this->ExecutionTarget = NULL;
}

void UAttackTargetTriageComponent::UnregisterTargetEvaluator(UObject* Evaluator) {
}

void UAttackTargetTriageComponent::TryUnlock() {
}

void UAttackTargetTriageComponent::TryLockSelectedTarget() {
}

void UAttackTargetTriageComponent::SortTargetMetricsByBestScoreFirst(TArray<FAttackTargetMetrics>& InMetrics, bool bUseCameraScore) {
}

void UAttackTargetTriageComponent::RegisterTargetEvaluator(UObject* Evaluator) {
}

bool UAttackTargetTriageComponent::IsLocked() const {
    return false;
}

bool UAttackTargetTriageComponent::IsAnyoneTargetingMe(float DistanceToCareAbout) const {
    return false;
}

bool UAttackTargetTriageComponent::HasStickTarget() const {
    return false;
}

bool UAttackTargetTriageComponent::HasExecutionTarget() const {
    return false;
}

bool UAttackTargetTriageComponent::HasCameraTarget() const {
    return false;
}

FAttackTargetMetrics UAttackTargetTriageComponent::GetTargetMetrics(UAttackTargetComponent* Target) const {
    return FAttackTargetMetrics{};
}

UAttackTargetComponent* UAttackTargetTriageComponent::GetStickTarget() const {
    return NULL;
}

UAttackTargetComponent* UAttackTargetTriageComponent::GetExecutionTarget() const {
    return NULL;
}

UAttackTargetComponent* UAttackTargetTriageComponent::GetClosestTarget() const {
    return NULL;
}

UAttackTargetComponent* UAttackTargetTriageComponent::GetCameraTarget() const {
    return NULL;
}

TArray<UAttackTargetComponent*> UAttackTargetTriageComponent::GetAllTargets() const {
    return TArray<UAttackTargetComponent*>();
}

void UAttackTargetTriageComponent::GetAllActiveTargetMetrics(TArray<FAttackTargetMetrics>& OutMetrics) {
}

UObject* UAttackTargetTriageComponent::FindTargetEvaluator(FGameplayTag EvaluatorTag, FAttackTargetEvaluatorData& OutData) {
    return NULL;
}


