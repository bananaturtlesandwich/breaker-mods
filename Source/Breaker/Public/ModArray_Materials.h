#pragma once
#include "CoreMinimal.h"
#include "ModArray_Materials.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FModArray_Materials {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstance*> Materials;
    
    BREAKER_API FModArray_Materials();
};

