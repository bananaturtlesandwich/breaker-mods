#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PingInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPingInterface : public UInterface {
    GENERATED_BODY()
};

class IPingInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName GetPingName();
    
};

