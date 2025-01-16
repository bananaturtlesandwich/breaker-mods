#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Curves/CurveFloat.h"
#include "GameplayTagContainer.h"
#include "EnemyDetails.h"
#include "EnemyFunctionLibrary.generated.h"

class AActor;
class UDataTable;

UCLASS(Blueprintable, Config=Game)
class UEnemyFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath EnemyDetailsTablePath;
    
public:
    UEnemyFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void RescaleFloatCurve(UPARAM(Ref) FRuntimeFloatCurve& InCurve, float XScale, float YScale);
    
    UFUNCTION(BlueprintCallable)
    static void RescaleAppendToFloatCurve(UPARAM(Ref) FRuntimeFloatCurve& InCurve, float XUnitsToAdd);
    
    UFUNCTION(BlueprintCallable)
    static void PushKeysAtStartAlongTangentToFloatCurve(UPARAM(Ref) FRuntimeFloatCurve& InCurve, TArray<float> XOffsets);
    
    UFUNCTION(BlueprintCallable)
    static void PushKeysAtEndAlongTangentToFloatCurve(UPARAM(Ref) FRuntimeFloatCurve& InCurve, TArray<float> XOffsets);
    
    UFUNCTION(BlueprintCallable)
    static void PopKeysFromStartOfFloatCurve(UPARAM(Ref) FRuntimeFloatCurve& InCurve, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static void PopKeysFromEndOfFloatCurve(UPARAM(Ref) FRuntimeFloatCurve& InCurve, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static void OffsetFloatCurve(UPARAM(Ref) FRuntimeFloatCurve& InCurve, float XUnitsToAdd, float YUnitsToAdd);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ModifyActorAttributesUsingArchetypeTag(AActor* Actor, float DifficultyLevel, FGameplayTag Archetype);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFloatRange GetRangeOfCurveAboveValue(const FRuntimeFloatCurve& InCurve, float Value);
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetEnemyDetailsTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetEnemyDetailsForArchetypeTag(FGameplayTag Archetype, FEnemyDetails& OutDetails);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetEnemyArchetypeTagFromActor(AActor* Actor, FGameplayTag& OutArchetype);
    
    UFUNCTION(BlueprintCallable)
    static void DiscretizeCurve(UPARAM(Ref) FRuntimeFloatCurve& InCurve, float Interval, float Tolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CurveHasKeys(const FRuntimeFloatCurve& InCurve);
    
};

