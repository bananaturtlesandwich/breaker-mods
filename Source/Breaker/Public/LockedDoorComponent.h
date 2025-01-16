#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/StaticMeshComponent.h"
#include "CurrencyCostMap.h"
#include "Templates/SubclassOf.h"
#include "LockedDoorComponent.generated.h"

class AActor;
class ABreakerPawn;
class UBreakerInteractPromptWidget;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ULockedDoorComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurrencyCostMap Cost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WidgetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBreakerInteractPromptWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOpenAllDoorsOnThisActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCloseAllDoorsOnThisActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BroadcastingTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ListeningTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ReverseListeningTags;
    
    ULockedDoorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StateSet(AActor* Pawn, bool IsServer, bool bInteracted);
    
    UFUNCTION(BlueprintCallable)
    void SetCost(FCurrencyCostMap NewCost);
    
    UFUNCTION(BlueprintCallable)
    void OpenDoor(ABreakerPawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void InternalOpenDoor(AActor* Pawn, bool IsServer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DoorOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DoorClosed();
    
    UFUNCTION(BlueprintCallable)
    void CloseDoor(ABreakerPawn* Pawn);
    
};

