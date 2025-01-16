#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LevelInstanceLoadingVolume.generated.h"

class ACameraActor;

UCLASS(Blueprintable)
class BREAKER_API ALevelInstanceLoadingVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelName;
    
    ALevelInstanceLoadingVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnloadLevel();
    
    UFUNCTION(BlueprintCallable)
    void LoadLevel();
    
    UFUNCTION(BlueprintCallable)
    ACameraActor* GetLevelCamera();
    
};

