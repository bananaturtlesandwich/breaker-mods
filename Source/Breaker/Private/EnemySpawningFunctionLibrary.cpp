#include "EnemySpawningFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UEnemySpawningFunctionLibrary::UEnemySpawningFunctionLibrary() {
}

ACMCharBase* UEnemySpawningFunctionLibrary::SpawnEnemyFromSpawnPreference(UObject* WorldContextObject, FEnemySpawnPreference SpawnPreference, FVector Location, FEnemySpawnParameters OptionalParameters, AActor* SpawningActor) {
    return NULL;
}

ACMCharBase* UEnemySpawningFunctionLibrary::SpawnEnemyByTag(UObject* WorldContextObject, FGameplayTag EnemyTag, FVector Location, FEnemySpawnParameters OptionalParameters, AActor* SpawningActor) {
    return NULL;
}

ACMCharBase* UEnemySpawningFunctionLibrary::SpawnEnemyByClass(UObject* WorldContextObject, TSubclassOf<ACMCharBase> EnemyClass, FVector Location, FEnemySpawnParameters OptionalParameters, AActor* SpawningActor) {
    return NULL;
}

void UEnemySpawningFunctionLibrary::SpawnEnemiesFromComposition(UObject* WorldContextObject, FEnemySpawnComposition EnemyComposition, FVector Location, FEnemySpawnParameters OptionalParameters, FEnemySpawnParameters OptionalCompositionParameters, AActor* SpawningActor, TArray<ACMCharBase*>& SpawnedEnemies) {
}

FEnemySpawnComposition UEnemySpawningFunctionLibrary::GetRandomWeightedComposition(UObject* WorldContextObject, TArray<FEnemySpawnComposition> Compositions) {
    return FEnemySpawnComposition{};
}

FVector UEnemySpawningFunctionLibrary::GetEnemySpawnLocation(UObject* WorldContextObject, FVector Location, FEnemySpawnParameters OptionalParameters) {
    return FVector{};
}

bool UEnemySpawningFunctionLibrary::GetEnemyClassFromTag(FGameplayTag EnemyTag, TSubclassOf<ACMCharBase>& EnemyClass) {
    return false;
}

TSubclassOf<ACMCharBase> UEnemySpawningFunctionLibrary::GetEnemyClassFromEnemySpawnPreference(UObject* WorldContextObject, FEnemySpawnPreference SpawnPreference, FVector Location, bool UseBiomeAndZoneInfo) {
    return NULL;
}

bool UEnemySpawningFunctionLibrary::CheckNumberOfPlayersRequirement(UObject* WorldContextObject, int32 MinPlayers, int32 MaxPlayers) {
    return false;
}


