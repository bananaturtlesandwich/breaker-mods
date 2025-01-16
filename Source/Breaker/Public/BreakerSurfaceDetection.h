#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SurfaceInfo.h"
#include "BreakerSurfaceDetection.generated.h"

class UObject;

UCLASS(Blueprintable)
class BREAKER_API UBreakerSurfaceDetection : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBreakerSurfaceDetection();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FSurfaceInfo GetSurfaceTypeFromLocation(const UObject* WorldContextObject, const FVector Location, const float CheckRadius, bool DrawDebug);
    
};

