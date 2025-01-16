#pragma once
#include "CoreMinimal.h"
#include "AudioMeshEmitterData.h"
#include "OnAudioMeshEmitterDataReadyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAudioMeshEmitterDataReady, const TArray<FAudioMeshEmitterData>&, OutData);

