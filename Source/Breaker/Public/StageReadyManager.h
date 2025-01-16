#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StageReadyEventDelegate.h"
#include "StageReadyManager.generated.h"

class UObject;
class UStageReadyManager;

UCLASS(Blueprintable, ClassGroup=Custom, Within=BreakerGameState, meta=(BlueprintSpawnableComponent))
class UStageReadyManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageReadyEvent StageReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageReadyEvent StageUnready;
    
    UStageReadyManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStageReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UStageReadyManager* Get(const UObject* WorldContextObject);
    
};

