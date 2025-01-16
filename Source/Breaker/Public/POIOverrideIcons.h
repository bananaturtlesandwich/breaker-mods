#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "POIOverrideIcons.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPOIOverrideIcons : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* OverrideIcon;
    
    BREAKER_API FPOIOverrideIcons();
};

