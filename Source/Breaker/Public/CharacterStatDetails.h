#pragma once
#include "CoreMinimal.h"
#include "CharacterStatDetails.generated.h"

USTRUCT(BlueprintType)
struct BREAKER_API FCharacterStatDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Energy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Power;
    
    FCharacterStatDetails();
};

