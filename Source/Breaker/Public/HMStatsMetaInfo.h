#pragma once
#include "CoreMinimal.h"
#include "HMStatsValueNameEntry.h"
#include "HMStatsMetaInfo.generated.h"

USTRUCT(BlueprintType)
struct FHMStatsMetaInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHMStatsValueNameEntry> EventCategoryDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHMStatsValueNameEntry> EventValueTypeDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHMStatsValueNameEntry> TagDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHMStatsValueNameEntry> ObjectContexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHMStatsValueNameEntry> FunctionDefinitions;
    
    BREAKER_API FHMStatsMetaInfo();
};

