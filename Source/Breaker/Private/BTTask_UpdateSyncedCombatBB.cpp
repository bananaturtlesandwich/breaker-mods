#include "BTTask_UpdateSyncedCombatBB.h"

UBTTask_UpdateSyncedCombatBB::UBTTask_UpdateSyncedCombatBB() {
    this->NodeName = TEXT("Breaker_UpdateCombatBlackboardEntries");
    this->bChangeAttackChannelBeforeUpdate = true;
    this->AttackChannelDataSource = EAttackChannel::DefaultAttack;
}


