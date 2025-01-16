#pragma once
#include "CoreMinimal.h"
#include "DirectionalByteField2d.generated.h"

class UByteField;

USTRUCT(BlueprintType)
struct FDirectionalByteField2d {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UByteField* R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UByteField* G;
    
    BREAKER_API FDirectionalByteField2d();
};

