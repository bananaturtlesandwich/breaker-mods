#include "FlyingEnemyComponent.h"
#include "Net/UnrealNetwork.h"

UFlyingEnemyComponent::UFlyingEnemyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CapsuleComponent = NULL;
    this->BodyHitbox = NULL;
    this->Mesh = NULL;
    this->FastAltitudeSpeed = 1000.00f;
    this->AscendSpeed = 200.00f;
    this->DescendSpeed = 500.00f;
    this->AltitudeOffset = 0.00f;
    this->RepTargetAltitude = 0.00f;
    this->CurrentAltitude = 0.00f;
    this->RealTargetAltitude = 0.00f;
    this->PushBackComponent = NULL;
}

void UFlyingEnemyComponent::BindToComponents(UCapsuleComponent* InCapsuleComponent, USkeletalMeshComponent* InMesh, UCapsuleComponent* InBodyHitbox) {
}

void UFlyingEnemyComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFlyingEnemyComponent, RepTargetAltitude);
    DOREPLIFETIME(UFlyingEnemyComponent, CurrentAltitude);
}


