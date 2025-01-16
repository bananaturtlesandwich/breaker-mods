#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LockedDoorActor.generated.h"

class ULockedDoorComponent;

UCLASS(Blueprintable)
class BREAKER_API ALockedDoorActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULockedDoorComponent* LockedDoorComponent;
    
public:
    ALockedDoorActor(const FObjectInitializer& ObjectInitializer);

};

