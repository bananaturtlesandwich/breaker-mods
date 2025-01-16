#pragma once
#include "CoreMinimal.h"
#include "DamageGroup.h"
#include "DebugDamageLedgerInfo.h"
#include "VisualDebuggerBaseGameInstanceSubsystem.h"
#include "VisualDebuggerPlayerCombat.generated.h"

class AActor;
class UAnimMontage;
class UDebugTargetTracker;

UCLASS(Blueprintable)
class UVisualDebuggerPlayerCombat : public UVisualDebuggerBaseGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebugDamageLedgerInfo> DamageRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDamageGroup> FinalizedGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugTargetTracker* HitReactTargetTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MostRecentMontage;
    
public:
    UVisualDebuggerPlayerCombat();

protected:
    UFUNCTION(BlueprintCallable)
    void OnDebugTargetChanged(UDebugTargetTracker* Tracker, AActor* OldTarget, AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnDebugLockChanged(UDebugTargetTracker* Tracker, AActor* Target, bool bLockedOn);
    
};

