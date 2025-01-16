#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EEnemyPoolingState.h"
#include "EnemyLifeCycleComponent_PoolingStateEventDelegate.h"
#include "EnemySpawnParameters.h"
#include "EnemyLifeCycleComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UEnemyLifeCycleComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> SpawningActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemySpawnParameters SpawnParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasBeenRetiredToPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimesInitializedFromPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EnemyPoolingState, meta=(AllowPrivateAccess=true))
    EEnemyPoolingState EnemyPoolingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyPoolingState EnemyPoolingStateOld;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyLifeCycleComponent_PoolingStateEvent OnEnemyCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyLifeCycleComponent_PoolingStateEvent OnEnemySpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyLifeCycleComponent_PoolingStateEvent OnEnemyRetired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugCloseToPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DespawnDistance;
    
    UEnemyLifeCycleComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetDespawnDistance(float Distance);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EnemyPoolingState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpawned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPooled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBeenInitializedFromPool() const;
    
};

