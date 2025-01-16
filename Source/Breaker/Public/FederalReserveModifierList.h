#pragma once
#include "CoreMinimal.h"
#include "FederalReserveModifierList.generated.h"

class UFederalReserveModifier;

USTRUCT(BlueprintType)
struct FFederalReserveModifierList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFederalReserveModifier*> Modifiers;
    
    BREAKER_API FFederalReserveModifierList();
};

