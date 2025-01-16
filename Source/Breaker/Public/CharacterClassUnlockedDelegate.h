#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CharacterClassUnlockedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterClassUnlocked, FGameplayTag, CharacterClassTag);

