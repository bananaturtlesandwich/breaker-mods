#pragma once
#include "CoreMinimal.h"
#include "HMEventContainer.h"
#include "HMStatsMetaInfo.h"
#include "HMStatsFile.generated.h"

USTRUCT(BlueprintType)
struct FHMStatsFile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ApiVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DateRecorded;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 InitialTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 FinalTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 RecordedEvents;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 RecordedFunctionCalls;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 DataSegmentSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHMStatsMetaInfo MetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHMEventContainer> EventBuckets;
    
    BREAKER_API FHMStatsFile();
};

