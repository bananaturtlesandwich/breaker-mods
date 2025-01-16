#include "AILastRestrictionPrevention.h"

FAILastRestrictionPrevention::FAILastRestrictionPrevention() {
    this->AttackSlotRestricted = EAttackChannel::DefaultAttack;
    this->AttackTypeRestricted = EChoreographerAttackType::Melee;
    this->LastFailureFlags = EAIAbilityRestriction::ZeroBitMarker;
    this->AngleFailureResult = 0.00f;
    this->serverTimeSeconds = 0.00f;
    this->MaxServerSecondsDif = 0.00f;
    this->bFailedVerticalityCheck = false;
}

