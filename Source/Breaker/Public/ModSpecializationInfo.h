#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EModApplicationTarget.h"
#include "GameplayTagFloatPair.h"
#include "ModSpecializationInfo.generated.h"

USTRUCT(BlueprintType)
struct FModSpecializationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ModTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModApplicationTarget Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StackLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValidSpecializations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTagFloatPair> Specializations;
    
    BREAKER_API FModSpecializationInfo();
};

