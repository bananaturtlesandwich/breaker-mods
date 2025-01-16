#pragma once
#include "CoreMinimal.h"
#include "AsyncPathQueryResultsSwallowMethod.generated.h"

UENUM(BlueprintType)
enum class AsyncPathQueryResultsSwallowMethod : uint8 {
    AsyncPathQuery_DelegateCallbackSwallows,
    AsyncPathQuery_FramecheckSwallows,
    AsyncPathQuery_BothDelegateAndFrameCheckAllowed,
};

