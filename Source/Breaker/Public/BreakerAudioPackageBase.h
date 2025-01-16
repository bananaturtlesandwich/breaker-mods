#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "BreakerAudioPackageBase.generated.h"

UCLASS(Blueprintable, HideDropdown)
class BREAKER_API UBreakerAudioPackageBase : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer EnablingTags;
    
    UBreakerAudioPackageBase();

};

