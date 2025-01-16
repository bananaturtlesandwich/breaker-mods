#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EAttributeType.h"
#include "AttributeInitializer.generated.h"

USTRUCT(BlueprintType)
struct HMMAGIC_API FAttributeInitializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttributeType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange InitialRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange InitialRangeValue;
    
    FAttributeInitializer();
};

