#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_DrivePlaybackSpeedWithCurve.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAnimNotifyState_DrivePlaybackSpeedWithCurve : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveName;
    
public:
    UAnimNotifyState_DrivePlaybackSpeedWithCurve();

};

