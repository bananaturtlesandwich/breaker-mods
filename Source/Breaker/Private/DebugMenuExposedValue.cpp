#include "DebugMenuExposedValue.h"

FDebugMenuExposedValue::FDebugMenuExposedValue() {
    this->Type = EDebugMenuValueType::None;
    this->bBoolValue = false;
    this->IntValue = 0;
    this->IntStep = 0;
    this->FloatValue = 0.00f;
    this->FloatStep = 0.00f;
}

