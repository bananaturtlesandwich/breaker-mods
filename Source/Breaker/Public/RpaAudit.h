#pragma once
#include "CoreMinimal.h"
#include "RpaAuditItems.h"
#include "RpaAudit.generated.h"

USTRUCT(BlueprintType)
struct FRpaAudit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StopAuditOnFailure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRpaAuditItems> AuditItems;
    
    BREAKER_API FRpaAudit();
};

