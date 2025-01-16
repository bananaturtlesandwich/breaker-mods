#pragma once
#include "CoreMinimal.h"
#include "ImGuiContext.h"
#include "BreakerModuleImGuiDrawDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBreakerModuleImGuiDrawDelegate, FImGuiContext, ImGuiContextData);

