#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESignificanceLevel.h"
#include "OnSignificanceChangedDelegate.h"
#include "SignificanceResponderComponent.generated.h"

class USignificanceCalculator;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USignificanceResponderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunOnServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunOnClient;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSignificanceChanged OnSignificanceChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USignificanceCalculator*> Calculators;
    
    USignificanceResponderComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAtLeastAsSignificantAs(ESignificanceLevel Input, ESignificanceLevel Other);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESignificanceLevel GetSignificance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRawSignificance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESignificanceLevel DiscretizeSignificance(float RawSignificance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float ConvertSignificanceLevelToFloat(ESignificanceLevel Level);
    
};

