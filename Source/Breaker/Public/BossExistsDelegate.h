#pragma once
#include "CoreMinimal.h"
#include "BossExistsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBossExists, const FString&, BossName);

