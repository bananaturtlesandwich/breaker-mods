#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BreakerCharacterStatPacket.generated.h"

USTRUCT(BlueprintType)
struct FBreakerCharacterStatPacket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CharacterStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Modifier;
    
    BREAKER_API FBreakerCharacterStatPacket();
};

