#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EJumpFloodChannel.h"
#include "JumpFloodStatics.generated.h"

class UMaterial;
class UObject;
class UTexture;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class BREAKER_API UJumpFloodStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UJumpFloodStatics();

    UFUNCTION(BlueprintCallable)
    static void JumpFloodForParenting(UObject* WorldRef, FVector2D MinMaxDist, UTextureRenderTarget2D* SourceTexture, UTextureRenderTarget2D* SwapA, UTextureRenderTarget2D* SwapB, UMaterial* MI_PreProcess, UMaterial* MI_Process, UMaterial* MI_PostProcess);
    
    UFUNCTION(BlueprintCallable)
    static void JumpFlood(UObject* Target, UTexture* SourceTexture, UTextureRenderTarget2D* DestinationTexture, const TEnumAsByte<EJumpFloodChannel> SourceChannel);
    
};

