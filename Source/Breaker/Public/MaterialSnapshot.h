#pragma once
#include "CoreMinimal.h"
#include "MaterialSnapshot.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FMaterialSnapshot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCustomRenderDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> Materials;
    
    BREAKER_API FMaterialSnapshot();
};

