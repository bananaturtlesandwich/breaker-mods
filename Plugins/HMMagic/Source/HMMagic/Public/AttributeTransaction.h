#pragma once
#include "CoreMinimal.h"
#include "AttributeModifier.h"
#include "EAttributeTransactionType.h"
#include "AttributeTransaction.generated.h"

USTRUCT(BlueprintType)
struct HMMAGIC_API FAttributeTransaction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttributeModifier Modifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttributeTransactionType TransactionType;
    
    FAttributeTransaction();
};

