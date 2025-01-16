#pragma once
#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkIOSAdvancedInitializationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkIOSAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering {
    GENERATED_BODY()
public:
    AKAUDIO_API FAkIOSAdvancedInitializationSettings();
};

