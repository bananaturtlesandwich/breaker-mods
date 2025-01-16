#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "GearHolobyteWhitelist.generated.h"

USTRUCT(BlueprintType)
struct FGearHolobyteWhitelist : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer WhitelistHolobytes;
    
    BREAKER_API FGearHolobyteWhitelist();
};

