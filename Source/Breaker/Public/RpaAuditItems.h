#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ERpaAuditRule.h"
#include "ERpaCategory.h"
#include "RpaAuditItems.generated.h"

USTRUCT(BlueprintType)
struct FRpaAuditItems {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Biome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERpaCategory> RpaCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERpaAuditRule> Rule;
    
    BREAKER_API FRpaAuditItems();
};

