#pragma once
#include "CoreMinimal.h"
#include "OnDynamicMaterialCreatedDelegate.generated.h"

class UMaterialInstanceDynamic;
class UMaterialStackComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnDynamicMaterialCreated, UMaterialStackComponent*, MatStack, const FString&, Key, UMaterialInstanceDynamic*, DynMat);

