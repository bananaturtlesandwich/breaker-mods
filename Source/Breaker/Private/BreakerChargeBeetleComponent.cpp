#include "BreakerChargeBeetleComponent.h"
#include "Net/UnrealNetwork.h"

UBreakerChargeBeetleComponent::UBreakerChargeBeetleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HoverAcceleration = 1000.00f;
    this->HoverRadiusHorizontal = 100.00f;
    this->HoverRadiusVertical = 50.00f;
    this->CenterHeight = 120.00f;
    this->WobbleAngle = 10.00f;
    this->RotationFactor = 0.01f;
    this->WobbleThreshold = 5.00f;
    this->DeathFallTime = 2.00f;
    this->TransitionSpeed = 16.00f;
    this->DeathSpinTime = 1.50f;
    this->DeathSpinRevolutions = 3.00f;
    this->VibrationFrequency = 1440.00f;
    this->VibrationAmplitude = 10.00f;
    this->bInAttackState = false;
    this->IdealFlyHeight = 0.00f;
    this->CurrentFlyHeight = 0.00f;
    this->RecentlyDamagedDeadline = 0.00f;
}

void UBreakerChargeBeetleComponent::TriggerDeath(FVector SpinAxis, float NumSpins) {
}

void UBreakerChargeBeetleComponent::Reset() {
}

void UBreakerChargeBeetleComponent::RandomizeIdealHeight() {
}

FVector UBreakerChargeBeetleComponent::GetCurrentFlightTranslation() const {
    return FVector{};
}

FRotator UBreakerChargeBeetleComponent::GetCurrentFlightRotation() const {
    return FRotator{};
}

void UBreakerChargeBeetleComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBreakerChargeBeetleComponent, bInAttackState);
    DOREPLIFETIME(UBreakerChargeBeetleComponent, IdealFlyHeight);
}


