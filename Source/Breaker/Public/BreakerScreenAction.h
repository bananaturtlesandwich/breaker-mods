#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/EngineBaseTypes.h"
#include "BreakerScreenAction.generated.h"

USTRUCT(BlueprintType)
struct BREAKER_API FBreakerScreenAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle InputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EInputEvent> EventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConsumeInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayInActionBar;
    
    FBreakerScreenAction();
};

