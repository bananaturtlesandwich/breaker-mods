#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NavToTargetFilter.generated.h"

class AActor;
class UNavToTargetMovementComponent;
class USceneComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BREAKER_API UNavToTargetFilter : public UObject {
    GENERATED_BODY()
public:
    UNavToTargetFilter();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USceneComponent* GetTargetSceneComponent(UNavToTargetMovementComponent* Component, AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanAcceptTarget(UNavToTargetMovementComponent* Component, AActor* Target);
    
};

