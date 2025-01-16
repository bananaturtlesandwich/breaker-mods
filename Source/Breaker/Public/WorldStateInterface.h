#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EMapActorState.h"
#include "WorldStateInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UWorldStateInterface : public UInterface {
    GENERATED_BODY()
};

class IWorldStateInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWorldState(EMapActorState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWorldID(int32 NewID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SaveWorldState(EMapActorState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EMapActorState GetWorldState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetWorldID();
    
};

