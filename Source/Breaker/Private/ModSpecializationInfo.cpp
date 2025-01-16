#include "ModSpecializationInfo.h"

FModSpecializationInfo::FModSpecializationInfo() {
    this->Target = EModApplicationTarget::Default;
    this->StackLevel = 0;
    this->bValidSpecializations = false;
}

