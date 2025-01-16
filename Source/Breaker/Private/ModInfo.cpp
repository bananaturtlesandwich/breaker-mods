#include "ModInfo.h"

FModInfo::FModInfo() {
    this->SpawnPool = EModifierSpawnPool::DEFAULT;
    this->HolobyteCategory = EHolobyteCategory::DEFAULT;
    this->EquipmentSlot = EEquipmentType::Amp;
    this->HolobyteType = EHolobyteType::NONE;
    this->bShowStatusEffectStackOption = false;
    this->bApplyMaxStatusEffectStacks = false;
    this->RelatedEquipmentCategory = EEquipmentCategory::None;
    this->bUseModValueRanges = false;
    this->ModValue = 0.00f;
    this->ModStackUpgradeValue = 0.00f;
    this->bIsModValuePercent = false;
    this->SecondaryModValue = 0.00f;
    this->SecondaryModStackUpgradeValue = 0.00f;
    this->bIsSecondaryModValuePercent = false;
    this->ModDuration = 0.00f;
    this->ModStackUpgradeDuration = 0.00f;
    this->MaxModStacking = 0;
    this->ModPrimaryModifierType = EAttributeModifierType::Maximum;
    this->bApplyLocalModificationsOnServer = false;
    this->Icon = NULL;
    this->Spawnability = EEquipmentSpawnability::None;
    this->bIsClientOnly = false;
    this->bVisibleInRun = false;
    this->bUseUpgradeLevels = false;
    this->bUpgradeLevelsAreAbilities = false;
    this->ActivationStyle = EActiveHolobyteActivationStyle::OnPressed;
    this->CooldownTime = 0.00f;
    this->bShowAutoCooldownOption = false;
    this->bAutoStartCooldown = false;
}

