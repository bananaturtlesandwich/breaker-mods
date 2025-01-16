#include "ByteFieldFunctionLibrary.h"

UByteFieldFunctionLibrary::UByteFieldFunctionLibrary() {
}

UByteField* UByteFieldFunctionLibrary::SetValueAtPosition(UByteField* Field, FVector source_point, uint8 Value) {
    return NULL;
}

TArray<FVector> UByteFieldFunctionLibrary::ScatterPointsInRange(UByteField* Field, float min_value, float max_value, int32 num_points, int32 Seed) {
    return TArray<FVector>();
}

TArray<FVector> UByteFieldFunctionLibrary::RejectPointsOutsideOfRange(UByteField* Field, float min_value, float max_value, TArray<FVector> source_points) {
    return TArray<FVector>();
}

TArray<uint8> UByteFieldFunctionLibrary::GetValuesAtPositions(UByteField* Field, TArray<FVector> source_points) {
    return TArray<uint8>();
}

uint8 UByteFieldFunctionLibrary::GetValueAtPosition(UByteField* Field, const FVector& source_point) {
    return 0;
}

int32 UByteFieldFunctionLibrary::GetDataIndexForPosition(UByteField* Field, FVector source_point) {
    return 0;
}

UByteField* UByteFieldFunctionLibrary::CreateByteFieldFromTexture(FVector Center, FVector Extent, float min_value, float max_value, UTexture2D* Texture, EChannelSelection Channel) {
    return NULL;
}

UByteField* UByteFieldFunctionLibrary::CreateByteFieldFromRenderTarget(FVector Center, FVector Extent, float min_value, float max_value, UTextureRenderTarget2D* rendertexture) {
    return NULL;
}

int32 UByteFieldFunctionLibrary::CheckPointInZones(FVector source_point, TArray<int32> targetZones, TArray<UByteField*> zoneDensities) {
    return 0;
}

UByteField* UByteFieldFunctionLibrary::ByteFieldMin(UByteField* A, UByteField* B) {
    return NULL;
}

UByteField* UByteFieldFunctionLibrary::ByteFieldMax(UByteField* A, UByteField* B) {
    return NULL;
}

UByteField* UByteFieldFunctionLibrary::ByteFieldBlend(UByteField* field_a, UByteField* field_b, float multiplier_a, float multiplier_b) {
    return NULL;
}

TArray<FVector> UByteFieldFunctionLibrary::ApplyHeightsToPoints(UByteField* Field, TArray<FVector> source_points) {
    return TArray<FVector>();
}


