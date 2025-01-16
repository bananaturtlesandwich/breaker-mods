#pragma once
#include "CoreMinimal.h"
#include "EAttackChannel.h"
#include "EChoreographerAttackType.h"
#include "OnAttackRequestAcceptedDelegate.generated.h"

class UChoreographyComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnAttackRequestAccepted, UChoreographyComponent*, choreographerCompDenied, EAttackChannel, attackChannel, EChoreographerAttackType, attackType, float, serverTimeSeconds);

