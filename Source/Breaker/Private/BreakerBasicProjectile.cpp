#include "BreakerBasicProjectile.h"

UBreakerBasicProjectile::UBreakerBasicProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProjectileLifetime = 3.00f;
    this->bDoMovement = true;
    this->InitialSpeed = 1000.00f;
    this->Acceleration = 2500.00f;
    this->AccelerationDelay = 0.00f;
    this->bApplyInitialSpeedAfterDelay = false;
    this->SpinInitialSpeed = 0.00f;
    this->SpinAcceleration = 0.00f;
    this->SpinAccelerationDelay = 0.00f;
    this->bApplySpinInitialSpeedAfterDelay = false;
    this->bAutoScanForImpacts = true;
    this->DamageChannel = ECC_WorldStatic;
}

void UBreakerBasicProjectile::ScanForImpactsInPlace() {
}

float UBreakerBasicProjectile::GetTotalLifetime() const {
    return 0.0f;
}

float UBreakerBasicProjectile::GetRemainingLifetime() const {
    return 0.0f;
}

FVector UBreakerBasicProjectile::GetDamageWorldPosition() const {
    return FVector{};
}

FBreakerProjectileShape UBreakerBasicProjectile::GetDamageShapeDetails() const {
    return FBreakerProjectileShape{};
}

FQuat UBreakerBasicProjectile::GetDamageOrientation() const {
    return FQuat{};
}

void UBreakerBasicProjectile::AddIgnoredActor(AActor* IgnoredActor) {
}


