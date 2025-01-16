#include "BreakerHazardVolume.h"

UBreakerHazardVolume::UBreakerHazardVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LoopDamage = true;
    this->TimerFrequency = 1.00f;
    this->TimerInvalidationDelay = 0.00f;
    this->StatusEffectType = EStatusEffectType::Instant;
    this->StatusEffectLevel = 1;
}

void UBreakerHazardVolume::InvalidateTimer(ABreakerPawn* InPawn, FTimerHandle Timer) {
}

void UBreakerHazardVolume::DamagePawn(ABreakerPawn* InPawn) {
}


