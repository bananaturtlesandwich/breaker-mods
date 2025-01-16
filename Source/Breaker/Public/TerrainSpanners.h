#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "TerrainSpanners.generated.h"

UCLASS(Blueprintable)
class BREAKER_API UTerrainSpanners : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTwoVectors> AnchorPoints;
    
    UTerrainSpanners();

};

