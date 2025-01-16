#pragma once
#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "EEquipmentType.h"
#include "VendorGearTypes.generated.h"

USTRUCT(BlueprintType)
struct FVendorGearTypes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EEquipmentType> GearTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECurrencyType> CurrencyTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSellsHealthKits;
    
    BREAKER_API FVendorGearTypes();
};

