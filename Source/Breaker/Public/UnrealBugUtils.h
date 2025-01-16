#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UnrealBugUtils.generated.h"

class UObject;

UCLASS(Blueprintable)
class UUnrealBugUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUnrealBugUtils();

    UFUNCTION(BlueprintCallable)
    static void FixupNullComponentsInActorBlueprintsCDO(TArray<UObject*> BlueprintAssets);
    
};

