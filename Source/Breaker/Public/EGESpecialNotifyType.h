#pragma once
#include "CoreMinimal.h"
#include "EGESpecialNotifyType.generated.h"

UENUM(BlueprintType)
enum class EGESpecialNotifyType : uint8 {
    Self,
    Teammates,
    Enemies,
};

