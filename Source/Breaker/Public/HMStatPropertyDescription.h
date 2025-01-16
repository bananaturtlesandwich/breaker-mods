#pragma once
#include "CoreMinimal.h"
#include "HMStatPropertyDescription.generated.h"

USTRUCT(BlueprintType)
struct FHMStatPropertyDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 PropertyFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Tags;
    
    BREAKER_API FHMStatPropertyDescription();
};

