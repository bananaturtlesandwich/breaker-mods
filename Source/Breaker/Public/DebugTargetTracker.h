#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnDebugLockChangedDelegate.h"
#include "OnDebugTargetChangedDelegate.h"
#include "TargetTrackerUpdateParams.h"
#include "DebugTargetTracker.generated.h"

class AActor;

UCLASS(Blueprintable)
class UDebugTargetTracker : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTargetTrackerUpdateParams UpdateParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* InspectedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocalRole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> InspectableActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> InspectionStrings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InspectionStringIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastLockedActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDebugTargetChanged OnTargetChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDebugLockChanged OnLockChanged;
    
    UDebugTargetTracker();

    UFUNCTION(BlueprintCallable)
    void UpdateTargetLock();
    
    UFUNCTION(BlueprintCallable)
    void UpdateInspectedActor(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void UpdateActorList();
    
};

