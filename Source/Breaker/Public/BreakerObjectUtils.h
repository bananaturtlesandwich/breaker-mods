#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BreakerObjectUtils.generated.h"

class UObject;

UCLASS(Blueprintable)
class BREAKER_API UBreakerObjectUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBreakerObjectUtils();

    UFUNCTION(BlueprintCallable)
    static void SetObjectDirty(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static void SaveClassConfigObject(UObject* ConfigObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ObjectHasOwningWorld(UObject* TheObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetNetModeStringForCurrentWorld(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMutableClassConfigObject(UClass* Class, UObject*& OutConfigObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetCurrentWorldName(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ConstructObjectWithFlags(UClass* Class, UObject* Outer, bool bTransient, bool bPublic, bool bStandalone, UObject*& OutNewObject);
    
    UFUNCTION(BlueprintCallable)
    static void ClearObjectDirtyFlag(UObject* Object);
    
};

