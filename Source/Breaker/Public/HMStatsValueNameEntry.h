#pragma once
#include "CoreMinimal.h"
#include "HMStatsValueNameEntry.generated.h"

USTRUCT(BlueprintType)
struct FHMStatsValueNameEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 RawValue;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 RawPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ParentEntry;
    
    BREAKER_API FHMStatsValueNameEntry();
};

