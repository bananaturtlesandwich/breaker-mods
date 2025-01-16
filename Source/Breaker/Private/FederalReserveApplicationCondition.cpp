#include "FederalReserveApplicationCondition.h"

UFederalReserveApplicationCondition::UFederalReserveApplicationCondition() {
    this->bNegate = false;
}

int32 UFederalReserveApplicationCondition::GetSpecificityScore_Implementation() const {
    return 0;
}

FString UFederalReserveApplicationCondition::GetEditorDisplayName_Implementation() const {
    return TEXT("");
}

bool UFederalReserveApplicationCondition::Evaluate_Implementation(const FFederalReserveDocketContext& Context, const FFederalReserveActionResults& CurrentResults) {
    return false;
}

bool UFederalReserveApplicationCondition::ConditionsMet(const FFederalReserveDocketContext& Context, const FFederalReserveActionResults& CurrentResults) {
    return false;
}

bool UFederalReserveApplicationCondition::ApplyNegate(bool bResult) const {
    return false;
}


