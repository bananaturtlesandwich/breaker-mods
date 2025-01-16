#pragma once
#include "CoreMinimal.h"
#include "CombatEffectCreationContext.h"
#include "Templates/SubclassOf.h"
#include "BreakerCombatEffectPacket.generated.h"

class AActor;
class UBreakerCombatEffect;

USTRUCT(BlueprintType)
struct FBreakerCombatEffectPacket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBreakerCombatEffect> EffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatEffectCreationContext CreationContext;
    
    BREAKER_API FBreakerCombatEffectPacket();
};

