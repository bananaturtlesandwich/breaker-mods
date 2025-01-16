#pragma once
#include "CoreMinimal.h"
#include "BreakerScreenBase.h"
#include "DialogueScreen.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BREAKER_API UDialogueScreen : public UBreakerScreenBase {
    GENERATED_BODY()
public:
    UDialogueScreen();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateNPCPortrait(FName InkCharID, FName Emote);
    
};

