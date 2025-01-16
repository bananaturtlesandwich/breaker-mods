#pragma once
#include "CoreMinimal.h"
#include "EAnimUnlinkCondition.h"
#include "Templates/SubclassOf.h"
#include "PendingAnimUnlink.generated.h"

class UBreakerAnimInstance;
class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FPendingAnimUnlink {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimUnlinkCondition Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBreakerAnimInstance> LinkedAbpClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    BREAKER_API FPendingAnimUnlink();
};

