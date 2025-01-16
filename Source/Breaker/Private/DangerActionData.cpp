#include "DangerActionData.h"

FDangerActionData::FDangerActionData() {
    this->DangerActionType = EDangerActionType::None;
    this->DangerActionValue = 0;
    this->DangerActionValue_Scale2Players = 0.00f;
    this->DangerActionValue_Scale3Players = 0.00f;
    this->DangerActionInUse = false;
}

