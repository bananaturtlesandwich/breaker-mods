#include "BreakerGameInstance.h"
#include "Templates/SubclassOf.h"

UBreakerGameInstance::UBreakerGameInstance() {
    this->WorldSaveComponent = NULL;
    this->bDisconnectOccured = false;
    this->LocalPlayerDetailsObject = NULL;
    this->VendorDataAsset = NULL;
    this->GearVariablesDataAsset = NULL;
    this->NumberOfStarterHealthKits = 1;
    this->MaxNumberOfHealthKits = 1;
    this->WorldRankLevels = NULL;
    this->BreakerSkinDetailsOverride = NULL;
    this->P4ChangelistNumber = TEXT("107552");
    this->P4Branch = TEXT("++HeartMonster+jenkins-Breaker-Release-Next-GamePackage");
    this->NumberOfAbilityEquipSlots_Default = 3;
    this->AbilityUIDataTable = NULL;
    this->SpawnPoolDataTable = NULL;
    this->NumPooledClassesToSpawnPerFrame = 5;
    this->NumPooledInstancesToSpawnPerFrame = 25;
}

TSet<FGameplayTag> UBreakerGameInstance::UI_GetAbilitiesForTree(const int32 SectionNumber, const bool bLeft) const {
    return TSet<FGameplayTag>();
}

void UBreakerGameInstance::TriggerPerClassCooldown(FName Cooldown, UClass* ObjectClass, float Time) {
}

void UBreakerGameInstance::TriggerPerActorCooldown(FName Cooldown, AActor* Actor, float Time) {
}

void UBreakerGameInstance::TriggerCooldown(FName Cooldown, float Time) {
}

void UBreakerGameInstance::TossAllActorsOfClassInPool(TSubclassOf<AActor> ActorClass) {
}

void UBreakerGameInstance::TossActorInPool(AActor* Actor) {
}

void UBreakerGameInstance::StopGameplayRecording(UObject* WorldContextObject) {
}

void UBreakerGameInstance::StartGameplayRecording(UObject* WorldContextObject) {
}

void UBreakerGameInstance::SetWorldSeedVariant(int32 NewSeed, int32 NewVariant) {
}

void UBreakerGameInstance::SetNumberOfCompletedMissionsForHostMigration(int32 Defeated) {
}

void UBreakerGameInstance::SetLastSafeWorldLocation(FVector NewSafeLocation) {
}

void UBreakerGameInstance::SetLastDefeatedBossForHostMigration(FGameplayTag Biome) {
}

void UBreakerGameInstance::SetDefeatedBossesForHostMigration(TArray<FGameplayTag> Biomes) {
}

void UBreakerGameInstance::SetDangerForHostMigration(int32 DangerMeter, int32 DangerDifficulty) {
}

void UBreakerGameInstance::SetCycleStateForHostMigration(ECycleStatus Status) {
}

void UBreakerGameInstance::SetCycleRunsForHostMigration(int32 Runs) {
}

void UBreakerGameInstance::SetCycleLivesForHostMigration(int32 Lives) {
}

void UBreakerGameInstance::SetCycleHealthKitsForHostMigration(int32 Kits) {
}

void UBreakerGameInstance::ResetSavedPOIData() {
}

bool UBreakerGameInstance::ResetLocalPlayerDetails_Implementation() {
    return false;
}

void UBreakerGameInstance::RemoveBossKeyDrop(FVector Location) {
}

void UBreakerGameInstance::PlayGameplayRecording(UObject* WorldContextObject) {
}

int32 UBreakerGameInstance::NumActiveActorsForPooledClass(TSubclassOf<AActor> ActorClass) {
    return 0;
}

void UBreakerGameInstance::IsStatsSession(bool& Result) {
}

bool UBreakerGameInstance::IsLevelStreamingComplete() {
    return false;
}

bool UBreakerGameInstance::IsLastSafeWorldLocationSet() {
    return false;
}

bool UBreakerGameInstance::IsHostMigrationSession() {
    return false;
}

bool UBreakerGameInstance::IsGameWindowInFocus() {
    return false;
}

bool UBreakerGameInstance::IsDoingHostMigration() {
    return false;
}

bool UBreakerGameInstance::IsActorClassInPool(TSubclassOf<AActor> ActorClass) {
    return false;
}

void UBreakerGameInstance::InitPooling() {
}

void UBreakerGameInstance::IncrementNumTimesWorldUsed() {
}

void UBreakerGameInstance::hlb_UseSavedWorld() {
}

void UBreakerGameInstance::hlb_UpdateGrassCullDistance(float NewCullDistance) {
}

void UBreakerGameInstance::hlb_TriggerDecking() {
}

void UBreakerGameInstance::hlb_ResetDeckingOverrides() {
}

void UBreakerGameInstance::hlb_ForceSaveLocalWorld() {
}

int32 UBreakerGameInstance::GetWorldSeed() {
    return 0;
}

UWorldSaveComponent* UBreakerGameInstance::GetWorldSaveComponent(const UObject* WorldContextObject) {
    return NULL;
}

TMap<int32, EMapActorState> UBreakerGameInstance::GetWorldActorStates() {
    return TMap<int32, EMapActorState>();
}

TArray<FUnlockedDoor> UBreakerGameInstance::GetUnlockedDoorsForHostMigration() {
    return TArray<FUnlockedDoor>();
}

TArray<int32> UBreakerGameInstance::GetUnlockedDDLsForHostMigration() {
    return TArray<int32>();
}

int32 UBreakerGameInstance::GetSectionNumberForAbility(const FGameplayTag& AbilityTag) const {
    return 0;
}

void UBreakerGameInstance::GetSavedPOIData(TArray<FPOIProcessedDisplayData>& InData) {
}


int32 UBreakerGameInstance::GetNumberOfPooledEnemiesInFlight() {
    return 0;
}

int32 UBreakerGameInstance::GetNumberOfPooledEnemies() {
    return 0;
}

int32 UBreakerGameInstance::GetNumberOfCompletedMissionsForHostMigration() {
    return 0;
}

int32 UBreakerGameInstance::GetNumberOfAbilitySections() const {
    return 0;
}

UPlayerDetailsObject* UBreakerGameInstance::GetLocalPlayerDetailsObject(const UObject* WorldContextObject) {
    return NULL;
}

FVector UBreakerGameInstance::GetLastSafeWorldLocation() {
    return FVector{};
}

FGameplayTag UBreakerGameInstance::GetLastDefeatedBossForHostMigration() {
    return FGameplayTag{};
}

int32 UBreakerGameInstance::GetHashFromString(const FString& StringIn) {
    return 0;
}

TMap<int32, bool> UBreakerGameInstance::GetEnemyAliveStates() {
    return TMap<int32, bool>();
}

TArray<FGameplayTag> UBreakerGameInstance::GetDefeatedBossesForHostMigration() {
    return TArray<FGameplayTag>();
}

void UBreakerGameInstance::GetDebugPoolInfo(TArray<FDebugPoolInfo>& PooledInfo) {
}

int32 UBreakerGameInstance::GetDangerMeterForHostMigration() {
    return 0;
}

int32 UBreakerGameInstance::GetDangerDifficultyForHostMigration() {
    return 0;
}

ECycleStatus UBreakerGameInstance::GetCycleStateForHostMigration() {
    return ECycleStatus::None;
}

int32 UBreakerGameInstance::GetCycleRunsForHostMigration() {
    return 0;
}

int32 UBreakerGameInstance::GetCycleLivesForHostMigration() {
    return 0;
}

int32 UBreakerGameInstance::GetCycleHealthKitsForHostMigration() {
    return 0;
}

int32 UBreakerGameInstance::GetActorHandle(AActor* Actor) {
    return 0;
}

AActor* UBreakerGameInstance::GetActorFromPoolDeferred(TSubclassOf<AActor> ActorClass, FTransform SpawnTransform, AActor* Owner, APawn* Instigator) {
    return NULL;
}

AActor* UBreakerGameInstance::GetActorFromPool(TSubclassOf<AActor> ActorClass, FTransform SpawnTransform, AActor* Owner, APawn* Instigator) {
    return NULL;
}

AActor* UBreakerGameInstance::GetActorByHandle(int32 Handle) {
    return NULL;
}

FCurrencyCostMap UBreakerGameInstance::GetAbilitySectionUnlockCost(const int32 SectionNumber) const {
    return FCurrencyCostMap{};
}

UBreakerGameInstance* UBreakerGameInstance::Get(const UObject* WorldContextObject) {
    return NULL;
}

void UBreakerGameInstance::ForceWriteSave(UObject* WorldContextObject) {
}

void UBreakerGameInstance::DebugDrawEnemiesInFlight() {
}

void UBreakerGameInstance::CompleteHostMigration() {
}

void UBreakerGameInstance::ClearPooling() {
}

void UBreakerGameInstance::ClearDefeatedBossesForHostMigration() {
}

bool UBreakerGameInstance::CheckPerClassCooldown(FName Cooldown, UClass* ObjectClass, float RequiredDownTime) {
    return false;
}

bool UBreakerGameInstance::CheckPerActorCooldown(FName Cooldown, AActor* Actor, float RequiredDownTime) {
    return false;
}

bool UBreakerGameInstance::CheckCooldown(FName Cooldown, float RequiredDownTime) {
    return false;
}

void UBreakerGameInstance::AddUnlockedDoorForHostMigration(int32 WorldID, FName ComponentTag) {
}

void UBreakerGameInstance::AddUnlockedDDLForHostMigration(int32 WorldID) {
}

void UBreakerGameInstance::AddSavedPOIData(FPOIProcessedDisplayData InData) {
}

void UBreakerGameInstance::AddDefeatedBossForHostMigration(FGameplayTag Biome) {
}

void UBreakerGameInstance::AddBossKeyDrop(FVector Location) {
}


