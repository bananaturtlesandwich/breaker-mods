#include "MaterialStackComponent.h"

UMaterialStackComponent::UMaterialStackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StackRootKey = TEXT("__Root");
    this->bDynamicMaterials = false;
}

void UMaterialStackComponent::RefreshRootMaterials(bool bResetStacks) {
}

void UMaterialStackComponent::PushNewMaterials(const FString& Key, const TArray<UMaterialInterface*>& Materials, bool bCustomRenderDepth) {
}

void UMaterialStackComponent::PushNewMaterial(const FString& Key, UMaterialInterface* Material, bool bCustomRenderDepth) {
}

void UMaterialStackComponent::PopMaterials(const FString& Key) {
}

TArray<UMaterialInterface*> UMaterialStackComponent::ConvertMaterialsToDynamic(UObject* Outer, const TArray<UMaterialInterface*>& InMaterials, TArray<int32>& OutConverted) {
    return TArray<UMaterialInterface*>();
}


