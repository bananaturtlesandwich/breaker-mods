#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EPropSizeCategory.h"
#include "PropSetClasses.h"
#include "PropSet.generated.h"

UCLASS(Blueprintable)
class BREAKER_API UPropSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPropSizeCategory>, FPropSetClasses> Props;
    
    UPropSet();

};

