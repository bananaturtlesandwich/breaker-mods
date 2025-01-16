#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SafeSpaceActor.generated.h"

class USafeSpace;

UCLASS(Blueprintable)
class BREAKER_API ASafeSpaceActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USafeSpace* SafeSpaceComponent;
    
public:
    ASafeSpaceActor(const FObjectInitializer& ObjectInitializer);

};

