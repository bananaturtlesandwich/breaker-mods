#include "FederalReserveModifier.h"

UFederalReserveModifier::UFederalReserveModifier() {
}

FString UFederalReserveModifier::GetEditorDisplayName_Implementation() const {
    return TEXT("");
}

bool UFederalReserveModifier::ConditionsMet_Implementation(const FFederalReserveDocketContext& Context, const FFederalReserveActionResults& CurrentResults) {
    return false;
}


