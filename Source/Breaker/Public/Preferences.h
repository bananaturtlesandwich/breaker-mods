#pragma once
#include "CoreMinimal.h"
#include "Preferences.generated.h"

USTRUCT(BlueprintType)
struct FPreferences {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysShowTutorials;
    
    BREAKER_API FPreferences();
};

