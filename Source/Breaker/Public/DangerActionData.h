#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EDangerActionType.h"
#include "DangerActionData.generated.h"

USTRUCT(BlueprintType)
struct FDangerActionData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDangerActionType DangerActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DangerActionValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DangerActionValue_Scale2Players;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DangerActionValue_Scale3Players;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DangerActionInUse;
    
    BREAKER_API FDangerActionData();
};

