#pragma once
#include "CoreMinimal.h"
#include "FederalReserveRollResultDefinition.generated.h"

class UFederalReserveResultAction;

USTRUCT(BlueprintType)
struct FFederalReserveRollResultDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFederalReserveResultAction*> Actions;
    
    BREAKER_API FFederalReserveRollResultDefinition();
};

