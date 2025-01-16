#include "BreakerPlayerEventListener.h"

UBreakerPlayerEventListener::UBreakerPlayerEventListener(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UBreakerPlayerEventListener::OnPlayerUseKit(ABreakerPawn* Player) {
}

void UBreakerPlayerEventListener::OnPlayerStartSpecial(ABreakerPawn* Player) {
}

void UBreakerPlayerEventListener::OnPlayerShoot(ABreakerPawn* Player) {
}

void UBreakerPlayerEventListener::OnPlayerHealthLost(FBreakerAttackReport AttackInfo) {
}

void UBreakerPlayerEventListener::OnPlayerEndSpecial(ABreakerPawn* Player) {
}

void UBreakerPlayerEventListener::OnExplosion(ABreakerPawn* Player, FVector ExplosionLocation) {
}

void UBreakerPlayerEventListener::OnEnemyKilled_ByAlly(FBreakerAttackReport AttackInfo) {
}

void UBreakerPlayerEventListener::OnEnemyKilled(FBreakerAttackReport AttackInfo) {
}

void UBreakerPlayerEventListener::OnEnemyDamaged_ByAlly(FBreakerAttackReport AttackInfo) {
}

void UBreakerPlayerEventListener::OnEnemyDamaged(FBreakerAttackReport AttackInfo) {
}

void UBreakerPlayerEventListener::OnDamageGroupResolved(FDamageGroup DamageGroup) {
}


