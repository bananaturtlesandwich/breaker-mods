#include "PlayerDamagePipeline.h"

UPlayerDamagePipeline::UPlayerDamagePipeline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SelfRecoilAmount = 110.00f;
    this->OwningPawn = NULL;
}

void UPlayerDamagePipeline::VisualizeDamageFromServer_Implementation(AActor* Target, AActor* Attacker, const FBreakerDamage& Damage) {
}

void UPlayerDamagePipeline::SendDamageToServerForProcessing_Implementation(AActor* Target, AActor* Attacker, const FBreakerDamage& Damage, const ABreakerPawn* CallingPlayer) {
}


