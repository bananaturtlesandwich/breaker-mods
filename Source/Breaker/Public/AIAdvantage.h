#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AIAdvantagePairMetaData.h"
#include "Templates/SubclassOf.h"
#include "AIAdvantage.generated.h"

class UNavArea;

USTRUCT(BlueprintType)
struct FAIAdvantage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> NavAreaEnablingAdvantage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AdvantageTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIAdvantagePairMetaData AdvantageMetaData;
    
public:
    BREAKER_API FAIAdvantage();
};

