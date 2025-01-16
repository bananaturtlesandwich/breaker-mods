#include "ClientProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "AttackTargetComponent.h"
#include "BreakerCombatEffectComponent.h"
#include "HitStopComponent.h"

AClientProjectile::AClientProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionShape"));
    this->HasDetonated = false;
    this->CollisionShape = (UShapeComponent*)RootComponent;
    this->AttackTarget = CreateDefaultSubobject<UAttackTargetComponent>(TEXT("AttackTarget"));
    this->BreakerGameplayEffectComponent = CreateDefaultSubobject<UBreakerCombatEffectComponent>(TEXT("BreakerGameplayEffectComponent"));
    this->HitStopComponent = CreateDefaultSubobject<UHitStopComponent>(TEXT("HitStopComponent"));
    this->OptionalProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("OptionalProjectileMovement"));
    this->bUseProjectileMovementComponent = false;
    this->bProjectileCanPhaseAI = false;
    this->bHasThreatIndicator = false;
    this->LifeTime = 10.00f;
    this->bDetonateOnLifetimeExpire = false;
    this->PostDetonateLingerTime = 1.00f;
    this->bHittingActorCausesDamage = true;
    this->CollisionSweepInflation = 0.00f;
    this->InitialSpeed = 900.00f;
    this->MaxSpeed = 1200.00f;
    this->LinearAccel = 300.00f;
    this->InitialBurstAccel = 0.00f;
    this->HomingStyle = EClientProjectileHomingStyle::None;
    this->bDebugDraw = false;
    this->HomingAccel = 0.00f;
    this->StopHomingIfHeadedAwayFromTarget = true;
    this->bAdhereToGround = false;
    this->GroundHeightIdeal = 0.00f;
    this->GroundSearchMax = 0.00f;
    this->BaseDamageModifier = 1.00f;
    this->DamageFingerprint = 0;
    this->DistanceTravelled = 0.00f;
    this->bOrientToVelocity = true;
    this->bIsDeflected = false;
    this->AttackTarget->SetupAttachment(RootComponent);
}

void AClientProjectile::TryHandleDisablingDamage_Implementation(AActor* OtherActor, const FBreakerDamage& Damage) {
}

void AClientProjectile::TryHandleDeflectingDamage_Implementation(AActor* OtherActor, const FBreakerDamage& Damage) {
}

void AClientProjectile::SetLifetime(float newLifetime) {
}



bool AClientProjectile::IsPooled() const {
    return false;
}

bool AClientProjectile::IsDetonated() const {
    return false;
}

bool AClientProjectile::HittingActorDetonatesProjectile_Implementation(AActor* OtherActor) {
    return false;
}

bool AClientProjectile::HasFullyDetonated() const {
    return false;
}


void AClientProjectile::Detonate_Implementation(bool bQuiet) {
}

FBreakerDamage AClientProjectile::ConstructDamageAgainstActor(AActor* Victim) {
    return FBreakerDamage{};
}

bool AClientProjectile::CanBeDeflected() const {
    return false;
}


