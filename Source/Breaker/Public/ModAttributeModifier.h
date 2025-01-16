#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EAttributeModifierType.h"
#include "ModAttributeModifier.generated.h"

USTRUCT(BlueprintType)
struct FModAttributeModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TargetAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttributeModifierType ModifierType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Modifier;
    
    BREAKER_API FModAttributeModifier();
};

