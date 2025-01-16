#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AimingOrbitCameraInterface.generated.h"

UINTERFACE(Blueprintable)
class BREAKER_API UAimingOrbitCameraInterface : public UInterface {
    GENERATED_BODY()
};

class BREAKER_API IAimingOrbitCameraInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetWantsAimAssist();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetAimAssistSuctionModifier();
    
};

