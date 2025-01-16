#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PlayerCharacterSkinTag.generated.h"

USTRUCT(BlueprintType)
struct FPlayerCharacterSkinTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    BREAKER_API FPlayerCharacterSkinTag();
};

