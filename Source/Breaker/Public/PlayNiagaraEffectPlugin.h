#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PlayNiagaraEffectPlugin.generated.h"

class AActor;
class UFXSystemComponent;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable, CollapseCategories, DefaultToInstanced, EditInlineNew)
class UPlayNiagaraEffectPlugin : public UObject {
    GENERATED_BODY()
public:
    UPlayNiagaraEffectPlugin();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEffectSpawned(UFXSystemComponent* Effect, AActor* TargetActor, UPrimitiveComponent* TargetComponent, bool bIsPreview);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FString GetEditorDisplayName() const;
    
};

