#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AudioMeshEmitterData.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FAudioMeshEmitterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform AudioEmitterTransform;
    
    BREAKER_API FAudioMeshEmitterData();
};

