#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UIFunctionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class UUIFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUIFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsBetweenCycles(const UObject* WorldContextObject);
    
};

