#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TestMonkeyRunnerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTestMonkeyRunnerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRunning;
    
    UTestMonkeyRunnerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartSession();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndSession();
    
};

