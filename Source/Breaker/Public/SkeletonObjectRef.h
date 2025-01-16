#pragma once
#include "CoreMinimal.h"
#include "SkeletonObjectRef.generated.h"

class USkeleton;

USTRUCT(BlueprintType)
struct FSkeletonObjectRef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeleton* SkeletonObject;
    
    BREAKER_API FSkeletonObjectRef();
};

