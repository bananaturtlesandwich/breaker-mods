#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "SignificanceCalculator.generated.h"

class USignificanceResponderComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USignificanceCalculator : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunOnServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunOnClient;
    
    USignificanceCalculator();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float Evaluate(const USignificanceResponderComponent* Responder, const FTransform& SignifanctSource) const;
    
};

