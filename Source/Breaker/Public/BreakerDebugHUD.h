#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "BreakerDebugHUD.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class ABreakerDebugHUD : public AHUD {
    GENERATED_BODY()
public:
    ABreakerDebugHUD(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void RecordSample(FName Name, float Value);
    
};

