#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ThreatDetectionArrowWidget.generated.h"

class UAttackTargetComponent;
class UAttackTargetTriageComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BREAKER_API UThreatDetectionArrowWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UThreatDetectionArrowWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateArrow(const UAttackTargetTriageComponent* TriageComponent, const UAttackTargetComponent* Target, bool bTargetAttacking, float AngleDegrees);
    
};

