#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CycleData.generated.h"

USTRUCT(BlueprintType)
struct FCycleData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeOfDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AbyssKing;
    
    BREAKER_API FCycleData();
};

