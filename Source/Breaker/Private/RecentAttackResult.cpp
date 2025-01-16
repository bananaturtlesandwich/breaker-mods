#include "RecentAttackResult.h"

FRecentAttackResult::FRecentAttackResult() {
    this->attackType = EChoreographerAttackType::Melee;
    this->TimeStampSeconds = 0.00f;
    this->DamageDone = 0.00f;
    this->bDidHitTargetActor = false;
}

