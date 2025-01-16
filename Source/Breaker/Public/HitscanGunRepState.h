#pragma once
#include "CoreMinimal.h"
#include "HitscanGunRepState.generated.h"

USTRUCT(BlueprintType)
struct FHitscanGunRepState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmmoCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmmoMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmmoClipCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmmoClipMax;
    
    BREAKER_API FHitscanGunRepState();
};

