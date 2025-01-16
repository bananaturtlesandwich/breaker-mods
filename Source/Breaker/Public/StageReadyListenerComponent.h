#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StageReadyEventDelegate.h"
#include "StageReadyListenerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStageReadyListenerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageReadyEvent InitialStageReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageReadyEvent StageReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageReadyEvent StageUnready;
    
    UStageReadyListenerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStageUnready();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStageReady();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStageReady() const;
    
};

