#pragma once
#include "CoreMinimal.h"
#include "MaterialSnapshot.h"
#include "MaterialSnapshotArray.generated.h"

USTRUCT(BlueprintType)
struct FMaterialSnapshotArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialSnapshot> Elements;
    
    BREAKER_API FMaterialSnapshotArray();
};

