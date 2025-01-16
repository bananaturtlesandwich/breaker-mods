#include "AttributeModifier.h"

FAttributeModifier::FAttributeModifier() {
    this->ModifierType = EAttributeModifierType::Maximum;
    this->AdjustmentValue = 0.00f;
    this->bModifiesBaseValue = false;
}

