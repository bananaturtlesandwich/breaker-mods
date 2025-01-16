#include "BTS_UpdateCombatBBOnFinish.h"

UBTS_UpdateCombatBBOnFinish::UBTS_UpdateCombatBBOnFinish() {
    this->NodeName = TEXT("Breaker_UpdateCombatBlackboardEntriesOnBranchEnd");
    this->bChangeAttackChannelBeforeUpdate = true;
    this->AttackChannelDataSource = EAttackChannel::DefaultAttack;
}


