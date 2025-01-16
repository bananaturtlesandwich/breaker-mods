#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DangerEventDifficultyData.generated.h"

USTRUCT(BlueprintType)
struct FDangerEventDifficultyData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DangerMeterDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DangerEventWeight;
    
    BREAKER_API FDangerEventDifficultyData();
};

