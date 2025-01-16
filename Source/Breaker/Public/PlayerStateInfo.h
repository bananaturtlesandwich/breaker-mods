#pragma once
#include "CoreMinimal.h"
#include "PlayerStateInfo.generated.h"

class UPlayerCharacterInfo;

USTRUCT(BlueprintType)
struct FPlayerStateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MeshId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFromServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterInfo* PlayerCharacterInfo;
    
    BREAKER_API FPlayerStateInfo();
};

