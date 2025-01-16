#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ModInfoText.generated.h"

USTRUCT(BlueprintType)
struct FModInfoText : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayLore;
    
    BREAKER_API FModInfoText();
};

