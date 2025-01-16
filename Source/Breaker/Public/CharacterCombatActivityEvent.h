#pragma once
#include "CoreMinimal.h"
#include "ECharacterCombatActivityEventType.h"
#include "ECharacterEquipmentSlot.h"
#include "EDashModifier.h"
#include "EEquipmentCategory.h"
#include "CharacterCombatActivityEvent.generated.h"

class UAnimMontage;
class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FCharacterCombatActivityEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterCombatActivityEventType EventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterEquipmentSlot WeaponSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquipmentCategory WeaponCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EDashModifier> DashModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* AssociatedSkelMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AssociatedMontage;
    
    BREAKER_API FCharacterCombatActivityEvent();
};

