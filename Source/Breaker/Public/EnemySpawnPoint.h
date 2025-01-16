#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EEnemySpawnState.h"
#include "EnemySpawnCalendar.h"
#include "Templates/SubclassOf.h"
#include "EnemySpawnPoint.generated.h"

class ACMCharBase;
class AEnemySpawnPoint;
class UObject;

UCLASS(Abstract, Blueprintable)
class BREAKER_API AEnemySpawnPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemySpawnCalendar SpawnCalendar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemySpawnState SpawnState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACMCharBase* SpawnedEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalSpawnLocationSafetyMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InsideSafeSpace;
    
    AEnemySpawnPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSpawnState(EEnemySpawnState NewSpawnState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideEnemy();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AEnemySpawnPoint* GetSpawnPointWithinRange(UObject* WorldContextObject, FVector Origin, float MinRange, float MaxRange);
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<ACMCharBase> GetSpawnClassForDifficulty(int32 Difficulty);
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<ACMCharBase> GetSpawnClassForCurrentDifficulty();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AEnemySpawnPoint* GetNearestSpawnPoint(UObject* WorldContextObject, FVector Origin, float MinRange);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TSubclassOf<ACMCharBase> GetEnemyClassToSpawn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableEnemy();
    
    UFUNCTION(BlueprintCallable)
    FString DebugDescribeCalendar();
    
};

