#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NavModifierVolumeActor.generated.h"

class UNavModifierVolumeComponent;

UCLASS(Blueprintable)
class BREAKER_API ANavModifierVolumeActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavModifierVolumeComponent* NavModifierVolumeComponent;
    
public:
    ANavModifierVolumeActor(const FObjectInitializer& ObjectInitializer);

};

