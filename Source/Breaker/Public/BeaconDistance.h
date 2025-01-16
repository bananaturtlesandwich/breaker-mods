#pragma once
#include "CoreMinimal.h"
#include "BeaconDistance.generated.h"

class ABeacon;

USTRUCT(BlueprintType)
struct FBeaconDistance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABeacon* Beacon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    BREAKER_API FBeaconDistance();
};

