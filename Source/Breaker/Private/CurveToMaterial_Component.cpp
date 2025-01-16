#include "CurveToMaterial_Component.h"

UCurveToMaterial_Component::UCurveToMaterial_Component(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseDefaultIfCurveNotFound = false;
    this->DefaultValueIfCurveNotFound = 0.00f;
    this->MaterialMeshComponent = NULL;
    this->MainSkeletalMesh = NULL;
    this->AnimInstanceReference = NULL;
}


