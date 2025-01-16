#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ByteFieldOwner.generated.h"

class UByteField;

UCLASS(Blueprintable)
class BREAKER_API UByteFieldOwner : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UByteField* ByteField;
    
    UByteFieldOwner();

};

