#pragma once
#include "CoreMinimal.h"
#include "BrkAudioNotify.h"
#include "ECharacterAttackSFXType.h"
#include "BrkAttackAudioNotify.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories)
class BREAKER_API UBrkAttackAudioNotify : public UBrkAudioNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCurrentAI_Attack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterAttackSFXType AttackSFX_Type;
    
    UBrkAttackAudioNotify();

};

