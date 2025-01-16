#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SignificanceSourceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USignificanceSourceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoRegisterOnPlay;
    
    USignificanceSourceComponent(const FObjectInitializer& ObjectInitializer);

};

