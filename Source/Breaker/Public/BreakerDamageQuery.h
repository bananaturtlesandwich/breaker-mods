#pragma once
#include "CoreMinimal.h"
#include "EDamageDetail.h"
#include "EDamageSourceType.h"
#include "EDamageStrengthType.h"
#include "BreakerDamageQuery.generated.h"

USTRUCT(BlueprintType)
struct FBreakerDamageQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTestDamageSourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageSourceType SourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTestDamageStrengthType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageStrengthType StrengthType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTestKillingBlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EDamageDetail> RequiredDamageDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EDamageDetail> IgnoredDamageDetails;
    
    BREAKER_API FBreakerDamageQuery();
};

