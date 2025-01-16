#pragma once
#include "CoreMinimal.h"
#include "SurfaceInfo.h"
#include "SurfaceInfoChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSurfaceInfoChanged, FSurfaceInfo, SurfInfo);

