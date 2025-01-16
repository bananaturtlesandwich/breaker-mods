#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PointOfInterestRegistrationEventDelegate.h"
#include "PointOfInterestManager.generated.h"

class UObject;
class UPointOfInterestComponent;
class UPointOfInterestManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPointOfInterestManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPointOfInterestRegistrationEvent OnPointRegistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPointOfInterestRegistrationEvent OnPointUnregistered;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPointOfInterestComponent*> RegisteredPoints;
    
public:
    UPointOfInterestManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPointOfInterestComponent*> GetRegisteredPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPointOfInterestManager* Get(const UObject* WorldContextObject);
    
};

