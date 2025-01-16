#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EChannelSelection.h"
#include "ByteFieldFunctionLibrary.generated.h"

class UByteField;
class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class UByteFieldFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UByteFieldFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static UByteField* SetValueAtPosition(UByteField* Field, FVector source_point, uint8 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FVector> ScatterPointsInRange(UByteField* Field, float min_value, float max_value, int32 num_points, int32 Seed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FVector> RejectPointsOutsideOfRange(UByteField* Field, float min_value, float max_value, TArray<FVector> source_points);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<uint8> GetValuesAtPositions(UByteField* Field, TArray<FVector> source_points);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetValueAtPosition(UByteField* Field, const FVector& source_point);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetDataIndexForPosition(UByteField* Field, FVector source_point);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UByteField* CreateByteFieldFromTexture(FVector Center, FVector Extent, float min_value, float max_value, UTexture2D* Texture, EChannelSelection Channel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UByteField* CreateByteFieldFromRenderTarget(FVector Center, FVector Extent, float min_value, float max_value, UTextureRenderTarget2D* rendertexture);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CheckPointInZones(FVector source_point, TArray<int32> targetZones, TArray<UByteField*> zoneDensities);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UByteField* ByteFieldMin(UByteField* A, UByteField* B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UByteField* ByteFieldMax(UByteField* A, UByteField* B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UByteField* ByteFieldBlend(UByteField* field_a, UByteField* field_b, float multiplier_a, float multiplier_b);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FVector> ApplyHeightsToPoints(UByteField* Field, TArray<FVector> source_points);
    
};

