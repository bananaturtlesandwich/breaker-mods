#pragma once
#include "CoreMinimal.h"
#include "HitScanShapePreviewSettings.generated.h"

USTRUCT(BlueprintType)
struct FHitScanShapePreviewSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawShapes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawArrows;
    
    BREAKER_API FHitScanShapePreviewSettings();
};

