#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyStateInstanceData.h"
#include "Templates/SubclassOf.h"
#include "AnimStateInstanceDataMapping.generated.h"

class UAnimNotifyState;

USTRUCT(BlueprintType)
struct FAnimStateInstanceDataMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UAnimNotifyState>, FAnimNotifyStateInstanceData> Data;
    
    BREAKER_API FAnimStateInstanceDataMapping();
};

