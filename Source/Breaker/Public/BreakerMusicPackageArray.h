#pragma once
#include "CoreMinimal.h"
#include "BreakerMusicPackageArray.generated.h"

class UBreakerMusicPackage;

USTRUCT(BlueprintType)
struct FBreakerMusicPackageArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBreakerMusicPackage*> BreakerMusicPackages;
    
    BREAKER_API FBreakerMusicPackageArray();
};

