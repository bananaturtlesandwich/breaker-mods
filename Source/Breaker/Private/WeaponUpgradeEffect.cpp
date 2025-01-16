#include "WeaponUpgradeEffect.h"

UWeaponUpgradeEffect::UWeaponUpgradeEffect() {
    this->bIsPerkEffect = true;
}

bool UWeaponUpgradeEffect::ShouldApply() const {
    return false;
}

void UWeaponUpgradeEffect::OnUpgradeLevelChanged_Implementation() {
}

float UWeaponUpgradeEffect::GetAssociatedValue() const {
    return 0.0f;
}


