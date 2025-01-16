#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "EBreakerHitboxStatus.h"
#include "BreakerHitboxCapsuleComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBreakerHitboxCapsuleComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBreakerHitboxStatus DefaultStatus;
    
    UBreakerHitboxCapsuleComponent(const FObjectInitializer& ObjectInitializer);

};

