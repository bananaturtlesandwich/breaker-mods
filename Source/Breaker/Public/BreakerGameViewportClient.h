#pragma once
#include "CoreMinimal.h"
#include "CommonGameViewportClient.h"
#include "BreakerGameViewportClient.generated.h"

class UBreakerGameViewportClient;
class UObject;

UCLASS(Blueprintable, NonTransient)
class BREAKER_API UBreakerGameViewportClient : public UCommonGameViewportClient {
    GENERATED_BODY()
public:
    UBreakerGameViewportClient();

private:
    UFUNCTION(BlueprintCallable, Exec)
    void SetGameUIOpacity(float InOpacity);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UBreakerGameViewportClient* Get(const UObject* WorldContextObject);
    
};

