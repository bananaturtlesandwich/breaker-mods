#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PoolInterface.generated.h"

UINTERFACE(Blueprintable)
class UPoolInterface : public UInterface {
    GENERATED_BODY()
};

class IPoolInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRetiredToPool();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitFromPool();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFirstCreated();
    
};

