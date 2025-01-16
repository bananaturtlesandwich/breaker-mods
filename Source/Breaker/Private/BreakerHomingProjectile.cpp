#include "BreakerHomingProjectile.h"

UBreakerHomingProjectile::UBreakerHomingProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxSpeed = 10000.00f;
    this->InitialSpeed = 1000.00f;
    this->Acceleration = 2500.00f;
    this->DistanceThreshold = 100.00f;
    this->SpinSpeed = 300.00f;
    this->DamageChannel = ECC_WorldStatic;
}

void UBreakerHomingProjectile::SetHomingTarget(AActor* NewTarget, FName OptionalSocketName) {
}

bool UBreakerHomingProjectile::IsProjectileActive() const {
    return false;
}

FVector UBreakerHomingProjectile::GetHomingTargetLocation() const {
    return FVector{};
}

FVector UBreakerHomingProjectile::GetDamageWorldPosition() const {
    return FVector{};
}

FBreakerProjectileShape UBreakerHomingProjectile::GetDamageShapeDetails() const {
    return FBreakerProjectileShape{};
}

FQuat UBreakerHomingProjectile::GetDamageOrientation() const {
    return FQuat{};
}

void UBreakerHomingProjectile::AddIgnoredActor(AActor* IgnoredActor) {
}


