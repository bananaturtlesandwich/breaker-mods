#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "BreakerAIButtonType.h"
#include "BreakerAIStickStyle.h"
#include "BreakerPlayerAIComponent.generated.h"

class UBehaviorTree;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API UBreakerPlayerAIComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWanderer;
    
    UBreakerPlayerAIComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopLogic();
    
    UFUNCTION(BlueprintCallable)
    void StartLogic();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetStickInputForFrames(int32 StartFrame, int32 EndFrame, TEnumAsByte<BreakerAIStickStyle> Style, FVector Direction);
    
    UFUNCTION(BlueprintCallable)
    void SetRightStickInputForFrames(int32 StartFrame, int32 EndFrame, TEnumAsByte<BreakerAIStickStyle> Style, FVector Direction);
    
    UFUNCTION(BlueprintCallable)
    void SetButtonInputForFrames(int32 StartFrame, int32 EndFrame, TEnumAsByte<BreakerAIButtonType> Button, bool Value);
    
public:
    UFUNCTION(BlueprintCallable)
    bool RunHeadlessBehaviorTree(UBehaviorTree* BTAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLogicSuspended() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputQueueEmpty();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllInputs();
    
};

