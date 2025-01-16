#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DangerEventDifficultyData.h"
#include "Templates/SubclassOf.h"
#include "DangerEventData.generated.h"

class ADangerEvent;
class UTexture2D;

USTRUCT(BlueprintType)
struct FDangerEventData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADangerEvent> DangerEventClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DangerEventWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanTriggerWithExtraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDangerEventDifficultyData> DangerEventDifficultyWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DangerHeadingText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DangerMessageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    BREAKER_API FDangerEventData();
};

