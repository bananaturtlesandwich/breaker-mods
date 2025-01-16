#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "JumpPadActor.generated.h"

class UJumpPadComponent;

UCLASS(Blueprintable)
class BREAKER_API AJumpPadActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UJumpPadComponent* JumpPadComponent;
    
public:
    AJumpPadActor(const FObjectInitializer& ObjectInitializer);

};

