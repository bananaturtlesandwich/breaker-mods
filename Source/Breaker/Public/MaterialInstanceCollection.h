#pragma once
#include "CoreMinimal.h"
#include "MaterialInstanceCollection.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct BREAKER_API FMaterialInstanceCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInstance>> MaterialInstances;
    
    FMaterialInstanceCollection();
};

