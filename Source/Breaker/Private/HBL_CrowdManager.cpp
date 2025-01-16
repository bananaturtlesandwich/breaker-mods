#include "HBL_CrowdManager.h"

UHBL_CrowdManager::UHBL_CrowdManager() {
    this->AvoidanceConfig.AddDefaulted(4);
    this->AIVelocityRingAvoidanceQuality = EAvoidanceAggression::AvoidanceAggression66;
}

void UHBL_CrowdManager::DigestAvoidanceConfig() {
}

int32 UHBL_CrowdManager::ConvertAvoidanceEnumEntryToIndex(const EAvoidanceAggression avoidanceQualityLevel) {
    return 0;
}


