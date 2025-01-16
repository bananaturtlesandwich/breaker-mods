#include "FederalReserveRollModifier.h"

UFederalReserveRollModifier::UFederalReserveRollModifier() {
}

FFederalReserveRollEntry UFederalReserveRollModifier::ModifyRollEntry_Implementation(const FFederalReserveDocketContext& Context, const FFederalReserveActionResults& CurrentResults, const FFederalReserveRollEntry& InRollEntry) {
    return FFederalReserveRollEntry{};
}

FString UFederalReserveRollModifier::GetEditorDisplayName_Implementation() const {
    return TEXT("");
}

bool UFederalReserveRollModifier::ConditionsMet_Implementation(const FFederalReserveDocketContext& Context, const FFederalReserveActionResults& CurrentResults, const FFederalReserveRollEntry& InRollEntry) {
    return false;
}


