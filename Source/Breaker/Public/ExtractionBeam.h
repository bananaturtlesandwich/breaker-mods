#pragma once
#include "CoreMinimal.h"
#include "ADA.h"
#include "ExtractionEnemyWaveData.h"
#include "ExtractionBeam.generated.h"

class ABreakerPawn;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class BREAKER_API AExtractionBeam : public AADA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ExtractionBeamActivated, meta=(AllowPrivateAccess=true))
    bool ExtractionBeamActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* BeamEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* ZoneEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABreakerPawn* LocalPlayerPawnInsideZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoneRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FailSafeSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExtractionEnemyWaveData> EnemyWaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 EnemyWaveIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 EnemyWaveIndexLast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnemyWaveTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 EnemyWaveKillPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 EnemyWaveKillPointsNeeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalEnemyKillPointsSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalEnemyKillPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnemyWaveDistanceMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnemyWaveDistanceMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnemyWaveDespawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ExtractionStartPoint, meta=(AllowPrivateAccess=true))
    bool ExtractionStartPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialEnemySpawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialEnemySpawnDelayTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequireKillingAllRemainingEnemiesOnLastWave;
    
    AExtractionBeam(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateThisToBeTheLastTriggeredBeam();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUseAsExtractionStartPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnServerSetupExtractionVote();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ExtractionStartPoint();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ExtractionBeamActivated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExtractionBeamActivated();
    
    UFUNCTION(BlueprintCallable)
    void ActivateExtractionBeam();
    
};

