#pragma once
#include "CoreMinimal.h"
#include "EEncounterState.h"
#include "EEncounterType.h"
#include "EncounterStateEventDelegate.generated.h"

class ACMCharBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FEncounterStateEvent, int32, EncounterID, EEncounterType, EncounterType, EEncounterState, EncounterState, EEncounterState, EncounterStateOld, ACMCharBase*, EncounterEnemy);

