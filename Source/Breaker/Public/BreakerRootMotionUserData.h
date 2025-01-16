#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "BreakerRootMotionUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBreakerRootMotionUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TranslationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanHalt;
    
    UBreakerRootMotionUserData();

};

