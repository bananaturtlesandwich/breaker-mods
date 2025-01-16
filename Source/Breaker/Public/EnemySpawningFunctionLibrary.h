#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "EnemySpawnComposition.h"
#include "EnemySpawnParameters.h"
#include "EnemySpawnPreference.h"
#include "Templates/SubclassOf.h"
#include "EnemySpawningFunctionLibrary.generated.h"

class AActor;
class ACMCharBase;
class UObject;

UCLASS(Blueprintable, Config=Game)
class BREAKER_API UEnemySpawningFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEnemySpawningFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ACMCharBase* SpawnEnemyFromSpawnPreference(UObject* WorldContextObject, FEnemySpawnPreference SpawnPreference, FVector Location, FEnemySpawnParameters OptionalParameters, AActor* SpawningActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ACMCharBase* SpawnEnemyByTag(UObject* WorldContextObject, FGameplayTag EnemyTag, FVector Location, FEnemySpawnParameters OptionalParameters, AActor* SpawningActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ACMCharBase* SpawnEnemyByClass(UObject* WorldContextObject, TSubclassOf<ACMCharBase> EnemyClass, FVector Location, FEnemySpawnParameters OptionalParameters, AActor* SpawningActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnEnemiesFromComposition(UObject* WorldContextObject, FEnemySpawnComposition EnemyComposition, FVector Location, FEnemySpawnParameters OptionalParameters, FEnemySpawnParameters OptionalCompositionParameters, AActor* SpawningActor, TArray<ACMCharBase*>& SpawnedEnemies);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FEnemySpawnComposition GetRandomWeightedComposition(UObject* WorldContextObject, TArray<FEnemySpawnComposition> Compositions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FVector GetEnemySpawnLocation(UObject* WorldContextObject, FVector Location, FEnemySpawnParameters OptionalParameters);
    
    UFUNCTION(BlueprintCallable)
    static bool GetEnemyClassFromTag(FGameplayTag EnemyTag, TSubclassOf<ACMCharBase>& EnemyClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TSubclassOf<ACMCharBase> GetEnemyClassFromEnemySpawnPreference(UObject* WorldContextObject, FEnemySpawnPreference SpawnPreference, FVector Location, bool UseBiomeAndZoneInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CheckNumberOfPlayersRequirement(UObject* WorldContextObject, int32 MinPlayers, int32 MaxPlayers);
    
};

