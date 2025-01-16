#pragma once
#include "CoreMinimal.h"
#include "SocketMapper.generated.h"

USTRUCT(BlueprintType)
struct BREAKER_API FSocketMapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SocketList;
    
    FSocketMapper();
};

