#pragma once
#include "CoreMinimal.h"
#include "EAIScopedStateChange.h"
#include "AIScopedStateChangeData.generated.h"

USTRUCT(BlueprintType)
struct FAIScopedStateChangeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIScopedStateChange StateChangeFlagAssociation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAssociatedStateFlag;
    
    BREAKER_API FAIScopedStateChangeData();
};

