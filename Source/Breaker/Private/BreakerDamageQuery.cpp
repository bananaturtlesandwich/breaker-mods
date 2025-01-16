#include "BreakerDamageQuery.h"

FBreakerDamageQuery::FBreakerDamageQuery() {
    this->bTestDamageSourceType = false;
    this->SourceType = EDamageSourceType::Melee;
    this->bTestDamageStrengthType = false;
    this->StrengthType = EDamageStrengthType::None;
    this->bTestKillingBlow = false;
}

