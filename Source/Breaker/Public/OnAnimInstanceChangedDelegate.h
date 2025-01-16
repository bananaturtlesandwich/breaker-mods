#pragma once
#include "CoreMinimal.h"
#include "OnAnimInstanceChangedDelegate.generated.h"

class AActor;
class UAnimInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAnimInstanceChanged, AActor*, Owner, UAnimInstance*, OldAnimInstance, UAnimInstance*, NewAnimInstance);

