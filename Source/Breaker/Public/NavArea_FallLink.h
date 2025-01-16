#pragma once
#include "CoreMinimal.h"
#include "NavArea_GameBase.h"
#include "NavArea_FallLink.generated.h"

UCLASS(Abstract, Blueprintable)
class BREAKER_API UNavArea_FallLink : public UNavArea_GameBase {
    GENERATED_BODY()
public:
    UNavArea_FallLink();

};

