#pragma once
#include "CoreMinimal.h"
#include "UnlockedDoor.generated.h"

USTRUCT(BlueprintType)
struct FUnlockedDoor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WorldID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentTag;
    
    BREAKER_API FUnlockedDoor();
};

