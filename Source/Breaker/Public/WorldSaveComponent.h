#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PangaeaWorldState.h"
#include "WorldSaveComponent.generated.h"

UCLASS(Blueprintable, Within=BreakerGameInstance)
class BREAKER_API UWorldSaveComponent : public UObject {
    GENERATED_BODY()
public:
    UWorldSaveComponent();

    UFUNCTION(BlueprintCallable)
    static void SetShouldUseSavedWorld(bool Should);
    
    UFUNCTION(BlueprintCallable)
    static void SetServerWorldReceived(bool IsReceived);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SaveLocalWorld(const UObject* WorldContextObject, bool bForceSave);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetLocalWorldState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ReceiveServerWorld(FPangaeaWorldState ServerWorldState);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LoadLocalWorld(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsUsingSavedWorldState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetServerWorldReceived();
    
};

