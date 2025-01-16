#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RootMotionTarget.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FRootMotionTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USceneComponent> SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    BREAKER_API FRootMotionTarget();
};

