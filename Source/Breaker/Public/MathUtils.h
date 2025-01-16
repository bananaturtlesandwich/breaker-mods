#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MathUtils.generated.h"

UCLASS(Blueprintable)
class UMathUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMathUtils();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetRandomPointInSphere(float Radius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ClampIntToRange(int32 Value, FInt32Range Range, bool bWrapValue);
    
};

