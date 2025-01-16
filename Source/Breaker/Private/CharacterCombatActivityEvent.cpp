#include "CharacterCombatActivityEvent.h"

FCharacterCombatActivityEvent::FCharacterCombatActivityEvent() {
    this->EventType = ECharacterCombatActivityEventType::None;
    this->WeaponSlot = ECharacterEquipmentSlot::None;
    this->WeaponCategory = EEquipmentCategory::None;
    this->AssociatedSkelMesh = NULL;
    this->AssociatedMontage = NULL;
}

