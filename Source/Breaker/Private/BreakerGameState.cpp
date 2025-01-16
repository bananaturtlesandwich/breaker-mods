#include "BreakerGameState.h"
#include "AttributeContainerComponent.h"
#include "AssassinManager.h"
#include "BossFightManager.h"
#include "BreakerGlobalEvents.h"
#include "BreakerStageManager.h"
#include "CycleManager.h"
#include "DangerMeterComponent.h"
#include "DaytimeCycleComponent.h"
#include "EncounterManager.h"
#include "EnemyGroupTracker.h"
#include "Net/UnrealNetwork.h"
#include "ReadyUpComponent.h"
#include "ReplicatedReadyStateComponent.h"
#include "SimpleReplicationTrigger.h"
#include "StageReadyManager.h"
#include "WorldReadyComponent.h"

ABreakerGameState::ABreakerGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HyperLevelManager = NULL;
    this->BreakerGlobalEvents = CreateDefaultSubobject<UBreakerGlobalEvents>(TEXT("GlobalEvents"));
    this->StageManager = CreateDefaultSubobject<UBreakerStageManager>(TEXT("StageManager"));
    this->StageReadyManager = CreateDefaultSubobject<UStageReadyManager>(TEXT("StageReadyManager"));
    this->ReadyUpComponent = CreateDefaultSubobject<UReadyUpComponent>(TEXT("ReadyUpComponent"));
    this->WorldReadyComponent = CreateDefaultSubobject<UWorldReadyComponent>(TEXT("WorldReadyComponent"));
    this->CycleUITriggerComponent = CreateDefaultSubobject<USimpleReplicationTrigger>(TEXT("CycleUITriggerComponent"));
    this->AbyssUITriggerComponent = CreateDefaultSubobject<USimpleReplicationTrigger>(TEXT("AbyssUITriggerComponent"));
    this->CycleUICompleteComponent = CreateDefaultSubobject<UReplicatedReadyStateComponent>(TEXT("CycleUICompleteComponent"));
    this->AbyssUICompleteComponent = CreateDefaultSubobject<UReplicatedReadyStateComponent>(TEXT("AbyssUICompleteComponent"));
    this->AttributeComponent = CreateDefaultSubobject<UAttributeContainerComponent>(TEXT("AttributeComponent"));
    this->BossFightManager = CreateDefaultSubobject<UBossFightManager>(TEXT("BossFightManager"));
    this->EncounterManager = CreateDefaultSubobject<UEncounterManager>(TEXT("EncounterManager"));
    this->EnemyGroupTracker = CreateDefaultSubobject<UEnemyGroupTracker>(TEXT("EnemyGroupTracker"));
    this->CycleManager = CreateDefaultSubobject<UCycleManager>(TEXT("CycleManager"));
    this->AssassinManager = CreateDefaultSubobject<UAssassinManager>(TEXT("AssassinManager"));
    this->DangerMeterComponent = CreateDefaultSubobject<UDangerMeterComponent>(TEXT("DangerMeterComponent"));
    this->DaytimeCycleComponent = CreateDefaultSubobject<UDaytimeCycleComponent>(TEXT("DaytimeCycleComponent"));
    this->bTownWorld = false;
    this->GlobalEvent_AbyssKing = NULL;
    this->NextAbyssKingEventTime = -1.00f;
    this->NextAbyssKingEventDay = -1;
    this->NextAbyssKingEventWarningTime = 5.00f;
    this->TimeUntilNextAbyssKingEvent = -1.00f;
    this->LastAbyssKingEventTime = -1.00f;
    this->RunExtractionMode = false;
    this->ActivatedRunExtractionBeam = NULL;
    this->RunTimeSeconds = -1.00f;
    this->RunTime_Warning_Time = -1.00f;
    this->RunTime_AbyssKingRises_Time = -1.00f;
    this->LastRunEndState = ELastRunEndState::Invalid;
    this->CachedPrevRunEndState = ELastRunEndState::Invalid;
    this->BeaconInProgress = NULL;
    this->BeaconClosestActive = NULL;
    this->BeaconClosestActiveDistance = -1.00f;
    this->BeaconClosestInactive = NULL;
    this->BeaconClosestInactiveDistance = -1.00f;
    this->BeaconClosestInProgress = NULL;
    this->BeaconClosestInProgressDistance = -1.00f;
    this->RegisteredDecker = NULL;
    this->BiomeInfoProvider = NULL;
    this->DebugEnemySpawnCount = 0;
    this->EliteSpawnClass = NULL;
    this->ChestClass = NULL;
    this->ShrineClass = NULL;
    this->ExtractionBeamClass = NULL;
    this->CycleCompletedAward_LivesToBrightBloodMultiplication = 100.00f;
}

void ABreakerGameState::UpdateDefeatedBosses_Implementation() {
}

void ABreakerGameState::UnregisterDDL(AADA* DDL) {
}

void ABreakerGameState::UnregisterBiomeInfoProvider(UObject* Provider) {
}

void ABreakerGameState::TriggerAbyssKingGlobalEvent_Multicast_Implementation() {
}

void ABreakerGameState::SpawnPing_Multicast_Implementation(const FName& PingName, FVector Location, bool bAutoDestroy, AActor* RepActor) {
}


void ABreakerGameState::SpawnOldDroppedBossKeys() {
}



void ABreakerGameState::SetLastRunEndState(ELastRunEndState RunState) {
}

void ABreakerGameState::SetDangerOnInitWorld() {
}

bool ABreakerGameState::RunStarted_Implementation() {
    return false;
}

bool ABreakerGameState::RunEnded_Implementation() {
    return false;
}

void ABreakerGameState::ResetCachedPrevRunState() {
}

void ABreakerGameState::RegisterDDL(AADA* DDL) {
}

void ABreakerGameState::RegisterBiomeInfoProvider(UObject* Provider) {
}


void ABreakerGameState::ProcessLastRunState() {
}


void ABreakerGameState::OnRep_DoorsLoadedUnlocked() {
}

void ABreakerGameState::OnRep_BossesDefeated() {
}

void ABreakerGameState::MulticastNotifyAllPlayersStageReady_Implementation() {
}

void ABreakerGameState::Multicast_SetTransientWorldRank_Implementation(const int32 NewTransientWorldRank) {
}

void ABreakerGameState::Multicast_EliteKilled_Implementation(const FBreakerAttackReport AttackReport) {
}

void ABreakerGameState::Multicast_AllyCausedDamage_Implementation(const bool bKilled, const FBreakerAttackReport AttackReport) {
}

void ABreakerGameState::MC_SetRequiredQuest_Implementation(const TArray<FQuestInfo>& SyncQuests, FGameplayTag NewlyAcceptedQuestTag) {
}

void ABreakerGameState::KillAllPlayers() {
}

bool ABreakerGameState::IsUsingCycleStartLocation() {
    return false;
}

bool ABreakerGameState::IsRunTimed() const {
    return false;
}

bool ABreakerGameState::IsLocationInsideAbyssKingZone(FVector Loc) {
    return false;
}

bool ABreakerGameState::IsLoading() {
    return false;
}

bool ABreakerGameState::IsInHub() {
    return false;
}

bool ABreakerGameState::IsDeckerComplete() {
    return false;
}

bool ABreakerGameState::IsCutscenePlaying_Implementation() const {
    return false;
}

void ABreakerGameState::InitMeteorData() {
}

void ABreakerGameState::InitializeUnlockedDoors() {
}

void ABreakerGameState::InitializeUnlockedDDLs() {
}

void ABreakerGameState::InitializeRunTime(FBreakerRunTimeInfo RunTimeInfo) {
}

void ABreakerGameState::InitializeExctractionPointsForRun(FVector StartLocation) {
}

void ABreakerGameState::HandleRunExtractionOnServer_Implementation() {
}

void ABreakerGameState::HandleRevivePlayerOnServer_Implementation(APlayerState* PlayerToRevive, bool Relocate, FVector RelocationPoint, bool ShrineRevive) {
}

float ABreakerGameState::GetTotalRunSeconds() {
    return 0.0f;
}

float ABreakerGameState::GetTimeSinceLastAbyssKingEvent() const {
    return 0.0f;
}

TArray<AActor*> ABreakerGameState::GetSortedDistancePotentialMeteorLocations(const FVector Center) {
    return TArray<AActor*>();
}

float ABreakerGameState::GetRemainingRunTime() {
    return 0.0f;
}

void ABreakerGameState::GetPlayerLocations(TArray<FVector>& Locations) {
}

APlayerState* ABreakerGameState::GetPlayerByName(const FString& PlayerName) const {
    return NULL;
}

int32 ABreakerGameState::GetNumberOfPlayersInExtractionZone() {
    return 0;
}

int32 ABreakerGameState::GetNumberOfPlayers() const {
    return 0;
}

int32 ABreakerGameState::GetNumberOfDeadPlayers() const {
    return 0;
}

int32 ABreakerGameState::GetNumberOfAlivePlayers() const {
    return 0;
}

float ABreakerGameState::GetNormalizedDifficultyLevel() {
    return 0.0f;
}

int32 ABreakerGameState::GetMaximumDifficultyLevel() const {
    return 0;
}

int32 ABreakerGameState::GetExtractionWaveNumberTotal() {
    return 0;
}

int32 ABreakerGameState::GetExtractionWaveNumber() {
    return 0;
}

int32 ABreakerGameState::GetExtractionWaveKillPointsTotal() {
    return 0;
}

int32 ABreakerGameState::GetExtractionWaveKillPoints() {
    return 0;
}

float ABreakerGameState::GetDistanceToClosestPlayer(const FVector Center) {
    return 0.0f;
}


ADecker* ABreakerGameState::GetDecker() const {
    return NULL;
}

int32 ABreakerGameState::GetCurrentWorldRank() {
    return 0;
}

int32 ABreakerGameState::GetCurrentDifficultyLevel() {
    return 0;
}


FCurrencyCostMap ABreakerGameState::GetBossDoorUnlockCost(int32 BossDoorNum) {
    return FCurrencyCostMap{};
}

UObject* ABreakerGameState::GetBiomeInfoProvider() const {
    return NULL;
}

ABreakerGameState* ABreakerGameState::Get(const UObject* WorldContextObject) {
    return NULL;
}

UPlayerCharacterInfo* ABreakerGameState::FindCharacterInfo(FGameplayTag ClassTag) const {
    return NULL;
}

void ABreakerGameState::ExtractPlayers_Multicast_Implementation() {
}

void ABreakerGameState::ExtractPlayers(UObject* WorldContextObject) {
}

void ABreakerGameState::DebugInitializeExctractionPoints() {
}

void ABreakerGameState::DEBUG_SetCachedPrevRunState(ELastRunEndState State) {
}

void ABreakerGameState::DDLLoadedUnlocked_Implementation(AADA* DDL) {
}

void ABreakerGameState::ClearBeacons() {
}

bool ABreakerGameState::CheckDistanceToShrines(const FVector TargetLocation, float MinDistance) {
    return false;
}

bool ABreakerGameState::CheckDistanceToMeteors(const FVector TargetLocation, float MinDistance, bool OnlyAOE) {
    return false;
}

bool ABreakerGameState::CheckDistanceToExtractionBeams(const FVector TargetLocation, float MinDistance) {
    return false;
}


bool ABreakerGameState::AreAllPlayersDead() const {
    return false;
}

void ABreakerGameState::AddExtractionKillPoints(int32 Points) {
}

void ABreakerGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABreakerGameState, BossesDefeated);
    DOREPLIFETIME(ABreakerGameState, LastRunEndState);
    DOREPLIFETIME(ABreakerGameState, CachedPrevRunEndState);
    DOREPLIFETIME(ABreakerGameState, DoorsLoadedUnlocked);
}


