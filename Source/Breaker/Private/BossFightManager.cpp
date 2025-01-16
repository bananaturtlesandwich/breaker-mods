#include "BossFightManager.h"

UBossFightManager::UBossFightManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BossFightDataTable = NULL;
    this->BossState = EBossState::NotActive;
    this->BossEnemy = NULL;
    this->CurrentStateTimer = 0.00f;
    this->CurrentStateTime = -1.00f;
    this->TotalBossFightTimer = 0.00f;
    this->LevelSequenceActor = NULL;
    this->IntroCutscene = NULL;
    this->OutroCutscene = NULL;
}

bool UBossFightManager::Stop_BossFight() {
    return false;
}

bool UBossFightManager::StartState_Success() {
    return false;
}

bool UBossFightManager::StartState_PlayPhase2() {
    return false;
}

bool UBossFightManager::StartState_PlayPhase1() {
    return false;
}

bool UBossFightManager::StartState_InitialWait() {
    return false;
}

bool UBossFightManager::StartState_Failure() {
    return false;
}

bool UBossFightManager::StartState_CutsceneStateChange() {
    return false;
}

bool UBossFightManager::StartState_CutsceneIntro() {
    return false;
}

bool UBossFightManager::StartState_CutsceneEnding() {
    return false;
}

bool UBossFightManager::Start_BossFight(ELevelState Level) {
    return false;
}

void UBossFightManager::SetRoomAnchor(AActor* RoomAnchor) {
}

void UBossFightManager::ResetBossFightManager() {
}

void UBossFightManager::RegisterCutscenes(ULevelSequence* Intro, ULevelSequence* Outro) {
}

void UBossFightManager::RegisterBossEnemy(ACMCharBase* Boss) {
}

void UBossFightManager::ReceiveCutsceneFinished() {
}

bool UBossFightManager::NextBossFightState() {
    return false;
}

void UBossFightManager::MulticastPlayCutscene_Implementation(ULevelSequence* Cutscene, ACMCharBase* Boss) {
}

void UBossFightManager::MulticastBossStateChanged_Implementation(EBossState CurrentState, EBossState PrevState) {
}

bool UBossFightManager::IsBossFightActive() const {
    return false;
}

bool UBossFightManager::AreAllPlayersReady() const {
    return false;
}


