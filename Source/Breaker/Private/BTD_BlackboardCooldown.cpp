#include "BTD_BlackboardCooldown.h"

UBTD_BlackboardCooldown::UBTD_BlackboardCooldown() {
    this->NodeName = TEXT("Breaker_BlackboardDerivedCooldown");
    this->bPopulateCooldownFromCombatAbility = true;
    this->AbilityAttackChannel = EAttackChannel::InvalidAttack;
    this->bUseBlackboardSelectorForCooldown = true;
    this->CooldownAdditivePadding = 0.00f;
    this->CooldownMultiplicativePadding = 1.00f;
}


