#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BreakerCharacterDefeatedListener.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UBreakerCharacterDefeatedListener : public UInterface {
    GENERATED_BODY()
};

class IBreakerCharacterDefeatedListener : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCharacterRestored();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCharacterDefeated();
    
};

