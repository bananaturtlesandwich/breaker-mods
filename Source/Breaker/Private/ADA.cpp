#include "ADA.h"
#include "Net/UnrealNetwork.h"

AADA::AADA(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WorldID = 0;
    this->MapActorState = EMapActorState::Initialized;
    this->HasLocators = false;
    this->bPathNode = false;
    this->PropPickerStartingPoints = 8;
}

void AADA::InitStream(int32 Seed) {
}

void AADA::Grassify() {
}

void AADA::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AADA, Stream);
    DOREPLIFETIME(AADA, DeckerReference);
    DOREPLIFETIME(AADA, Biome);
    DOREPLIFETIME(AADA, HasLocators);
}


