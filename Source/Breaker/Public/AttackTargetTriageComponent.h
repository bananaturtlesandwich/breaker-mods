#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "AttackTargetEvaluatorData.h"
#include "AttackTargetMetrics.h"
#include "OnExecutionTargetChangedDelegate.h"
#include "AttackTargetTriageComponent.generated.h"

class UAttackTargetComponent;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UAttackTargetTriageComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExecutionTargetChanged OnExecutionTargetChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceHysteresis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockOnDistanceHysteresis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScoreWeightDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScoreWeightDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StickTargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StickTargetAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxExecutionDistance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAttackTargetComponent* CameraTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAttackTargetComponent* StickTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAttackTargetComponent* ClosestTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAttackTargetComponent* ExecutionTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAttackTargetComponent*> AllTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UAttackTargetComponent*, FAttackTargetMetrics> TargetMetrics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UObject*, FAttackTargetEvaluatorData> CustomTargetEvaluators;
    
public:
    UAttackTargetTriageComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterTargetEvaluator(UObject* Evaluator);
    
    UFUNCTION(BlueprintCallable)
    void TryUnlock();
    
    UFUNCTION(BlueprintCallable)
    void TryLockSelectedTarget();
    
    UFUNCTION(BlueprintCallable)
    static void SortTargetMetricsByBestScoreFirst(UPARAM(Ref) TArray<FAttackTargetMetrics>& InMetrics, bool bUseCameraScore);
    
    UFUNCTION(BlueprintCallable)
    void RegisterTargetEvaluator(UObject* Evaluator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyoneTargetingMe(float DistanceToCareAbout) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasStickTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasExecutionTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCameraTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAttackTargetMetrics GetTargetMetrics(UAttackTargetComponent* Target) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAttackTargetComponent* GetStickTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAttackTargetComponent* GetExecutionTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAttackTargetComponent* GetClosestTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAttackTargetComponent* GetCameraTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UAttackTargetComponent*> GetAllTargets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllActiveTargetMetrics(TArray<FAttackTargetMetrics>& OutMetrics);
    
    UFUNCTION(BlueprintCallable)
    UObject* FindTargetEvaluator(FGameplayTag EvaluatorTag, FAttackTargetEvaluatorData& OutData);
    
};

