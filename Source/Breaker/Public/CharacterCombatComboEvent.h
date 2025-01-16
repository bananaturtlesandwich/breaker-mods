#pragma once
#include "CoreMinimal.h"
#include "BreakerDamage.h"
#include "ECharacterCombatComboEventType.h"
#include "ECharacterEquipmentSlot.h"
#include "EDashModifier.h"
#include "EEquipmentCategory.h"
#include "EMeleeAttackState.h"
#include "CharacterCombatComboEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FCharacterCombatComboEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterCombatComboEventType EventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterEquipmentSlot WeaponSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquipmentCategory WeaponCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeleeAttackState AttackState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChainedComboDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChainedSwapComboDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInLinkableCombo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBreakerDamage Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OtherDamageActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EDashModifier> DashModifiers;
    
    BREAKER_API FCharacterCombatComboEvent();
};

