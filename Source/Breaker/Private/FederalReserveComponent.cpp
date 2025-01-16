#include "FederalReserveComponent.h"

UFederalReserveComponent::UFederalReserveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Docket = NULL;
}

void UFederalReserveComponent::TakeActionsForRolledTags(FGameplayTagContainer RolledTags, FFederalReserveDocketContext Context, FFederalReserveActionResults& OutResults) {
}

bool UFederalReserveComponent::RequestMatchingEntriesInDocketInScoredOrder(const FFederalReserveDocketContext& Context, TArray<FFederalReserveDocketEntry>& OutEntries) {
    return false;
}

void UFederalReserveComponent::ProcessContainerEventWithFederalReserve(const UObject* WorldContextObject, FFederalReserveDocketContext Context, FFederalReserveActionResults& OutResults) {
}

void UFederalReserveComponent::ProcessContainerEvent_Implementation(FFederalReserveDocketContext Context, FFederalReserveActionResults& OutResults) {
}

bool UFederalReserveComponent::GetFederalReserve(const UObject* WorldContextObject, UFederalReserveComponent*& OutFederalReserve) {
    return false;
}

int32 UFederalReserveComponent::DocketEntry_GetSpecificityScore(const FFederalReserveDocketEntry& Entry) {
    return 0;
}

bool UFederalReserveComponent::DocketEntry_AreRequiredConditionsMet(const FFederalReserveDocketEntry& Entry, const FFederalReserveDocketContext& Context, const FFederalReserveActionResults& CurrentResults) {
    return false;
}


