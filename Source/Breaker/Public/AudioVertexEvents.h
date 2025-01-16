#pragma once
#include "CoreMinimal.h"
#include "AkMultiPositionType.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "AkLoopEvent.h"
#include "AudioVertexEvents.generated.h"

USTRUCT(BlueprintType)
struct FAudioVertexEvents : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAkLoopEvent AudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AkMultiPositionType PositionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AmbientAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultDebugColor;
    
    BREAKER_API FAudioVertexEvents();
};

