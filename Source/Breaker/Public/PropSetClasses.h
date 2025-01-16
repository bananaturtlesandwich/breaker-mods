#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PropSetClasses.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPropSetClasses {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> PropClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawSnapIncrement;
    
    BREAKER_API FPropSetClasses();
};

