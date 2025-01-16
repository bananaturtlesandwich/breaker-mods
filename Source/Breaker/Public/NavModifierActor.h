#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "NavModifierActor.generated.h"

class UNavArea;
class UNavModifierComponent;
class USceneComponent;

UCLASS(Blueprintable)
class BREAKER_API ANavModifierActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> NavAreaClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavModifierComponent* NavModifierComponent;
    
public:
    ANavModifierActor(const FObjectInitializer& ObjectInitializer);

};

