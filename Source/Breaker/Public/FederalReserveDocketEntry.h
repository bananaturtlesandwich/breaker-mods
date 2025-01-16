#pragma once
#include "CoreMinimal.h"
#include "FederalReserveRollEntry.h"
#include "FederalReserveDocketEntry.generated.h"

class UFederalReserveApplicationCondition;

USTRUCT(BlueprintType)
struct FFederalReserveDocketEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFederalReserveApplicationCondition*> RequiredConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFederalReserveRollEntry> RollTable;
    
    BREAKER_API FFederalReserveDocketEntry();
};

