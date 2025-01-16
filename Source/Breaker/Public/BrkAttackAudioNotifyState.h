#pragma once
#include "CoreMinimal.h"
#include "BrkAudioNotifyState.h"
#include "ECharacterAttackSFXType.h"
#include "BrkAttackAudioNotifyState.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class BREAKER_API UBrkAttackAudioNotifyState : public UBrkAudioNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCurrentAI_Attack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterAttackSFXType AttackSFX_Type;
    
    UBrkAttackAudioNotifyState();

};

