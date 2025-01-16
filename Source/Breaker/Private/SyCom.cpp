#include "SyCom.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/WidgetComponent.h"

ASyCom::ASyCom(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Root"));
    this->MoveSpeed = 30.00f;
    this->AimMoveSpeed = 45.00f;
    this->WobbleFrequency = 2.00f;
    this->WobbleAmplitude = 5.00f;
    this->RotationSpeed = 45.00f;
    this->bShouldOverrideActorTargetOffset = false;
    this->MeshRoot = (UStaticMeshComponent*)RootComponent;
    this->Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
    this->EyeLeft = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EyeLeft"));
    this->EyeRight = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EyeRight"));
    this->GaugeRoot = CreateDefaultSubobject<USceneComponent>(TEXT("GaugeRoot"));
    this->HealthGauge = CreateDefaultSubobject<UWidgetComponent>(TEXT("HealthGauge"));
    this->SprintGauge = CreateDefaultSubobject<UWidgetComponent>(TEXT("SprintGauge"));
    this->KitPointsGauge = CreateDefaultSubobject<UWidgetComponent>(TEXT("KitPointsGauge"));
    this->AmmoGauge = CreateDefaultSubobject<UWidgetComponent>(TEXT("AmmoGauge"));
    this->CircleGauge = CreateDefaultSubobject<UWidgetComponent>(TEXT("CircleGauge"));
    this->XpAlert = CreateDefaultSubobject<UWidgetComponent>(TEXT("XpAlert"));
    this->BloodCount = CreateDefaultSubobject<UWidgetComponent>(TEXT("BloodCount"));
    this->bFaceWithCamera = false;
    this->PlayerOwner = NULL;
    this->PositionUpdateElapsedTime = 0.00f;
    this->AmmoGauge->SetupAttachment(GaugeRoot);
    this->BloodCount->SetupAttachment(GaugeRoot);
    this->Body->SetupAttachment(RootComponent);
    this->CircleGauge->SetupAttachment(GaugeRoot);
    this->EyeLeft->SetupAttachment(RootComponent);
    this->EyeRight->SetupAttachment(RootComponent);
    this->GaugeRoot->SetupAttachment(RootComponent);
    this->HealthGauge->SetupAttachment(GaugeRoot);
    this->KitPointsGauge->SetupAttachment(GaugeRoot);
    this->SprintGauge->SetupAttachment(GaugeRoot);
    this->XpAlert->SetupAttachment(GaugeRoot);
}


FGenericGearInfo ASyCom::GetInfoForDefaultGear(FGameplayTag DefaultGearTag) const {
    return FGenericGearInfo{};
}

FGameplayTag ASyCom::GetCurrentSyComTag() const {
    return FGameplayTag{};
}

FSyComDetails ASyCom::GetCurrentSyComDetails() const {
    return FSyComDetails{};
}

float ASyCom::GetCurrentSyComBaseStatValue(FGameplayTag StatAttributeTag) const {
    return 0.0f;
}

void ASyCom::ChangeSyCom(const FGameplayTag& NewSyComTag, const bool bRefresh, const bool bUpdateGear) {
}


