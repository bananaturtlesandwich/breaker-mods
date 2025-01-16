#include "BreakerPlayerState.h"
#include "Net/UnrealNetwork.h"

ABreakerPlayerState::ABreakerPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCharacterInfo = NULL;
    this->SimProxy_NumberOfHealthKits = 0;
    this->PlayerSlot = -1;
    this->DefaultWeaponStanceAnimLinks = NULL;
    this->EnforceDataTableSkinToAnimBP_Matching = false;
    this->bIsPlayerStageReady = false;
}

void ABreakerPlayerState::UpdateUnlockGearState() {
}

void ABreakerPlayerState::ServerSetPlayerStageReady_Implementation(bool bReady) {
}

void ABreakerPlayerState::SERVER_ChangeNumberOfHealthKits_Implementation(const int32 CurrentNumber) {
}

void ABreakerPlayerState::OnRep_SyComTagChanged() {
}

void ABreakerPlayerState::OnRep_SimProxyNumberOfHealthKits() {
}

void ABreakerPlayerState::OnRep_PlayerInfo_Implementation(FPlayerStateInfo NewPlayerStateInfo) {
}

void ABreakerPlayerState::OnRep_CharacterInfoChanged() {
}

void ABreakerPlayerState::OnRep_bIsPlayerStageReady() {
}

void ABreakerPlayerState::OnNumberHealthKitsChanged(const int32 PrevNumber, const int32 CurrentNumber) {
}

bool ABreakerPlayerState::IsLocalState() const {
    return false;
}


void ABreakerPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABreakerPlayerState, PlayerStateInfo);
    DOREPLIFETIME(ABreakerPlayerState, PlayerCharacterInfo);
    DOREPLIFETIME(ABreakerPlayerState, CurrentSyComTag);
    DOREPLIFETIME(ABreakerPlayerState, SimProxy_NumberOfHealthKits);
    DOREPLIFETIME(ABreakerPlayerState, PlayerSlot);
    DOREPLIFETIME(ABreakerPlayerState, bIsPlayerStageReady);
}


