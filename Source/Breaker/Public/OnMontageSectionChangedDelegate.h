#pragma once
#include "CoreMinimal.h"
#include "OnMontageSectionChangedDelegate.generated.h"

class UAnimMontage;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnMontageSectionChanged, UAnimMontage*, Montage, FName, PrevSection, FName, NewSection);

