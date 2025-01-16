#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TitleHUD.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class ATitleHUD : public AHUD {
    GENERATED_BODY()
public:
    ATitleHUD(const FObjectInitializer& ObjectInitializer);

};

