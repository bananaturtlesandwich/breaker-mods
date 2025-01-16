#include "FederalReserveResultAction.h"

UFederalReserveResultAction::UFederalReserveResultAction() {
}

FString UFederalReserveResultAction::GetEditorDisplayName_Implementation() const {
    return TEXT("");
}

bool UFederalReserveResultAction::ConditionsMet_Implementation(const FFederalReserveDocketContext& Context, const FFederalReserveActionResults& CurrentResults) {
    return false;
}

void UFederalReserveResultAction::Apply_Implementation(const FFederalReserveDocketContext& Context, FFederalReserveActionResults& OutResults) {
}


