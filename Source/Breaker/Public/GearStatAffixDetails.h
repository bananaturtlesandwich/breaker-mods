#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GearStatAffixDetailsItem.h"
#include "GearStatAffixDetails.generated.h"

USTRUCT(BlueprintType)
struct FGearStatAffixDetails : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGearStatAffixDetailsItem> Stats;
    
    BREAKER_API FGearStatAffixDetails();
};

