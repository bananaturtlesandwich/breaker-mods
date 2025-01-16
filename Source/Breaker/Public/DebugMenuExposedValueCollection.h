#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DebugMenuExposedValue.h"
#include "DebugMenuExposedValueCollection.generated.h"

USTRUCT(BlueprintType)
struct FDebugMenuExposedValueCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MenuSectionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FDebugMenuExposedValue> Values;
    
    BREAKER_API FDebugMenuExposedValueCollection();
};

