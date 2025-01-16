#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HyperFabBpClass.generated.h"

USTRUCT(BlueprintType)
struct FHyperFabBpClass : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* CompClass;
    
    BREAKER_API FHyperFabBpClass();
};

