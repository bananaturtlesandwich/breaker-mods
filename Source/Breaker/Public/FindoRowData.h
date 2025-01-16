#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FindoVariantLocations.h"
#include "FindoRowData.generated.h"

USTRUCT(BlueprintType)
struct FFindoRowData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BiomeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFindoVariantLocations> VariantLocations;
    
    BREAKER_API FFindoRowData();
};

