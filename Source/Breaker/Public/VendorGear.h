#pragma once
#include "CoreMinimal.h"
#include "GenericGearInfo.h"
#include "VendorGear.generated.h"

USTRUCT(BlueprintType)
struct FVendorGear {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGenericGearInfo> AvailableGear;
    
    BREAKER_API FVendorGear();
};

