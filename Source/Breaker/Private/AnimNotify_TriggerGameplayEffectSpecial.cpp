#include "AnimNotify_TriggerGameplayEffectSpecial.h"

UAnimNotify_TriggerGameplayEffectSpecial::UAnimNotify_TriggerGameplayEffectSpecial() {
    this->GameplayEffect = NULL;
    this->TriggerType = EGESpecialNotifyType::Enemies;
    this->Radius = 5000.00f;
}


