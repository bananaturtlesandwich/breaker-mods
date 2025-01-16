#include "HyperLevelSetup.h"
#include "Net/UnrealNetwork.h"

AHyperLevelSetup::AHyperLevelSetup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->HubFromUninitializedFade = 0.20f;
    this->HubFromUninitializedExit = 0.20f;
    this->ExitHubToShopFade = 1.00f;
    this->ExitHubToShopDelay = 1.00f;
    this->ExitShopFade = 1.00f;
    this->ExitShopDelay = 1.00f;
    this->EnterShopDelay = 1.20f;
    this->EnterShopFade = 0.50f;
    this->ExitHubFade = 1.00f;
    this->ExitHubDelay = 1.00f;
    this->EnterHubDelay = 1.00f;
    this->EnterHubFade = 1.00f;
    this->ExitProcgenFade = 2.00f;
    this->ExitProcgenDelay = 2.00f;
    this->EnterProcgenDelay = 2.00f;
    this->EnterProcgenFade = 2.00f;
    this->DelayBeforeFadeInAfterWorldReady = 4.00f;
    this->Hub.AddDefaulted(14);
    this->HubShops.AddDefaulted(8);
    this->Pangaea.AddDefaulted(6);
    this->BossRooms.AddDefaulted(5);
    this->BossRoomLighting.AddDefaulted(5);
    this->BossRoomAudio.AddDefaulted(5);
    this->Abyss.AddDefaulted(3);
    this->TrainingArena.AddDefaulted(1);
    this->bReturningFromRun = false;
    this->CurrentState = ELevelState::Uninitialized;
    this->PreviousState = ELevelState::Uninitialized;
    this->RepTargetLevelState = ELevelState::Uninitialized;
}

void AHyperLevelSetup::WorldReadyToFadeIn() {
}

bool AHyperLevelSetup::StateIsShop(ELevelState CheckState) const {
    return false;
}

bool AHyperLevelSetup::StateIsRun(ELevelState CheckState) const {
    return false;
}

bool AHyperLevelSetup::StateIsBoss(ELevelState CheckState) const {
    return false;
}

void AHyperLevelSetup::RetryChangeLevel(ELevelState NewLevelState, bool bIsFromServer) {
}

void AHyperLevelSetup::OnRep_TargetLevelState() {
}

void AHyperLevelSetup::OnLevelStreamingStarted_Implementation(ELevelState NewLevel, ELevelState OldLevel) {
}

void AHyperLevelSetup::OnLevelStreamingCompleted_Implementation(ELevelState NewLevel, ELevelState OldLevel) {
}

void AHyperLevelSetup::OnLevelPostLoadDelayComplete_Implementation(ELevelState NewLevel, ELevelState OldLevel) {
}

void AHyperLevelSetup::OnLevelChangeInitiated_Implementation(ELevelState NewLevel, ELevelState OldLevel) {
}

void AHyperLevelSetup::OnLevelChangeFadeOutEnd_Implementation(ELevelState NewLevel, ELevelState OldLevel) {
}

void AHyperLevelSetup::OnLevelChangeFadeOutBegin_Implementation(ELevelState NewLevel, ELevelState OldLevel, float FadeLength) {
}

void AHyperLevelSetup::OnLevelChangeFadeInEnd_Implementation(ELevelState NewLevel, ELevelState OldLevel) {
}

void AHyperLevelSetup::OnLevelChangeFadeInBegin_Implementation(ELevelState NewLevel, ELevelState OldLevel) {
}

void AHyperLevelSetup::OnLevelChangeCompleted_Implementation(ELevelState NewLevel, ELevelState OldLevel) {
}

void AHyperLevelSetup::Multicast_InitiateLevelChange_Implementation(ELevelState NewLevelState) {
}

void AHyperLevelSetup::LevelWaitForStageReadyDelay() {
}

void AHyperLevelSetup::LevelTransitionDelay(ELevelState NewLevelState, bool bIsFromServer) {
}

void AHyperLevelSetup::LevelTransition(ELevelState NewLevelState, bool bIsFromServer) {
}

void AHyperLevelSetup::LevelStreamingCompleteDelay() {
}

void AHyperLevelSetup::LevelPostLoadDelay() {
}

void AHyperLevelSetup::LevelFadeInDelay() {
}

bool AHyperLevelSetup::IsLevelStreamingInProgress() const {
    return false;
}

bool AHyperLevelSetup::IsLevelChangeInProgress() const {
    return false;
}

void AHyperLevelSetup::HandleLevelStreamingStateChanged() {
}

ELevelChangeStatus AHyperLevelSetup::GetLevelChangeStatus() const {
    return ELevelChangeStatus::Idle;
}

bool AHyperLevelSetup::GetIsLevelTransitionHappening() {
    return false;
}

bool AHyperLevelSetup::ChangeState(ELevelState NewLevelState, bool bIsFromServer) {
    return false;
}

bool AHyperLevelSetup::ChangeLevel(ELevelState NewLevelState, bool bIsFromServer) {
    return false;
}

void AHyperLevelSetup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHyperLevelSetup, RepTargetLevelState);
}


