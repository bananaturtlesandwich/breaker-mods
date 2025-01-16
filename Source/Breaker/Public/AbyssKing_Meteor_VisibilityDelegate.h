#pragma once
#include "CoreMinimal.h"
#include "AbyssKing_Meteor_VisibilityDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAbyssKing_Meteor_Visibility, bool, Visible);

