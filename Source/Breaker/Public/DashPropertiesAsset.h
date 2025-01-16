#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DashProperties.h"
#include "DashPropertiesAsset.generated.h"

UCLASS(Blueprintable)
class UDashPropertiesAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDashProperties Data;
    
    UDashPropertiesAsset();

};

