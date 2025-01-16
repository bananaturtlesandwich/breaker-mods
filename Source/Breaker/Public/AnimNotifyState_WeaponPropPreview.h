#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "Engine/DataTable.h"
#include "HitScanShapePreviewSettings.h"
#include "AnimNotifyState_WeaponPropPreview.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class BREAKER_API UAnimNotifyState_WeaponPropPreview : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle WeaponTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverrideSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VisibilityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitScanShapePreviewSettings PreviewSettings;
    
    UAnimNotifyState_WeaponPropPreview();

};

