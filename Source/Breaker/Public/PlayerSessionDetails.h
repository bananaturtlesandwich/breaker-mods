#pragma once
#include "CoreMinimal.h"
#include "PlayerSessionDetails.generated.h"

USTRUCT(BlueprintType)
struct BREAKER_API FPlayerSessionDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelExperience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelProgression;
    
    FPlayerSessionDetails();
};

