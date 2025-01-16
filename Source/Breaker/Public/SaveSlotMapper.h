#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SaveSlotMapper.generated.h"

USTRUCT(BlueprintType)
struct FSaveSlotMapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FString> Map;
    
    BREAKER_API FSaveSlotMapper();
};

