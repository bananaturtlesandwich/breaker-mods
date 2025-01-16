#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RowMarkerData.generated.h"

USTRUCT(BlueprintType)
struct FRowMarkerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor RowColor;
    
    BREAKER_API FRowMarkerData();
};

