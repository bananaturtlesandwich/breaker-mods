#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SocketDetails.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct BREAKER_API FSocketDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform SocketWorldTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    FSocketDetails();
};

