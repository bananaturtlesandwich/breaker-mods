#pragma once
#include "CoreMinimal.h"
#include "NavAreas/NavArea.h"
#include "NavArea_BlockAI.generated.h"

UCLASS(Abstract, Blueprintable)
class BREAKER_API UNavArea_BlockAI : public UNavArea {
    GENERATED_BODY()
public:
    UNavArea_BlockAI();

};

