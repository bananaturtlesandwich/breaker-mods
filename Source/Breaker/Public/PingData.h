#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PingData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPingData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NotificationText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WorldMarkerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    BREAKER_API FPingData();
};

