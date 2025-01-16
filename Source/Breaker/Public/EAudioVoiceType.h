#pragma once
#include "CoreMinimal.h"
#include "EAudioVoiceType.generated.h"

UENUM(BlueprintType)
enum class EAudioVoiceType : uint8 {
    Default,
    Alert,
    Pain,
    Attack,
    Effort,
    Death,
    Max,
};

