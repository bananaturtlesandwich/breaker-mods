#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "VirtualPropertySet.generated.h"

USTRUCT(BlueprintType)
struct FVirtualPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> NumericProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FString> StringProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTag> TagProperties;
    
    BREAKER_API FVirtualPropertySet();
};

