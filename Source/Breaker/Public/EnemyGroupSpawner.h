#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "ADA.h"
#include "EnemySpawnCalendar.h"
#include "EnemySpawnComposition.h"
#include "EnemyGroupSpawner.generated.h"

class AEnemySpawnPoint;

UCLASS(Abstract, Blueprintable)
class BREAKER_API AEnemyGroupSpawner : public AADA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BiomeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ZoneTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemySpawnComposition GroupSpawnComposition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegisterWithSpawnManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AEnemySpawnPoint*> SpawnPoints;
    
    AEnemyGroupSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnWithCalendars(const TArray<FVector>& SpawnOffsets, const TArray<FEnemySpawnCalendar>& SpawnCalendars);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetIsLabSpawner(const bool bInIsLabZone);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInteriorSpawner(const bool bInIsInteriorZone);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLabSpawner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteriorSpawner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExteriorSpawner() const;
    
};

