#pragma once
#include "CoreMinimal.h"
#include "FederalReserveActionResults.h"
#include "FederalReserveDocketContext.h"
#include "OnFederalReserveActionTakenDelegate.generated.h"

class UFederalReserveComponent;
class UFederalReserveResultAction;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnFederalReserveActionTaken, UFederalReserveComponent*, TheFed, UFederalReserveResultAction*, Action, FFederalReserveDocketContext, Context, FFederalReserveActionResults, Results);

