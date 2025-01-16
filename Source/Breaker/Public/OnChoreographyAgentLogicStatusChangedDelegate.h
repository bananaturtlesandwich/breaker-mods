#pragma once
#include "CoreMinimal.h"
#include "OnChoreographyAgentLogicStatusChangedDelegate.generated.h"

class UChoreographyComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnChoreographyAgentLogicStatusChanged, UChoreographyComponent*, Component, bool, bIsSuspended, const FString&, Reason);

