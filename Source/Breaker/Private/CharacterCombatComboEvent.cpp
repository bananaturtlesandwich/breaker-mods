#include "CharacterCombatComboEvent.h"

FCharacterCombatComboEvent::FCharacterCombatComboEvent() {
    this->EventType = ECharacterCombatComboEventType::Interrupted;
    this->WeaponSlot = ECharacterEquipmentSlot::None;
    this->WeaponCategory = EEquipmentCategory::None;
    this->AttackState = EMeleeAttackState::None;
    this->ChainedComboDepth = 0;
    this->ChainedSwapComboDepth = 0;
    this->bInLinkableCombo = false;
    this->OtherDamageActor = NULL;
}

