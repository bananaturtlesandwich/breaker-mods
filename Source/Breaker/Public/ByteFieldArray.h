#pragma once
#include "CoreMinimal.h"
#include "ByteFieldArray.generated.h"

class UByteField;

USTRUCT(BlueprintType)
struct FByteFieldArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UByteField*> ByteFields;
    
    BREAKER_API FByteFieldArray();
};

