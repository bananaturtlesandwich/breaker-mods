#pragma once
#include "CoreMinimal.h"
#include "GlobalTargetRows.generated.h"

USTRUCT(BlueprintType)
struct FGlobalTargetRows {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RowNumberPerWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RowNumberPerBiome;
    
    BREAKER_API FGlobalTargetRows();
};

