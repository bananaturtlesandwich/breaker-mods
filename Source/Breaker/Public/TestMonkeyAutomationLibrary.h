#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ScreenResolutionRHIBP.h"
#include "StatViewerDeckerContext.h"
#include "TestMonkeyClassProperties.h"
#include "WidgetSearchContext.h"
#include "TestMonkeyAutomationLibrary.generated.h"

class APawn;
class UObject;
class UUserWidget;

UCLASS(Blueprintable)
class UTestMonkeyAutomationLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTestMonkeyAutomationLibrary();

    UFUNCTION(BlueprintCallable)
    static bool WidgetWithIdTagIsOnScreen(FName Tag);
    
    UFUNCTION(BlueprintCallable)
    static bool SimulateInputActionByNameOnWidgetsInSearchContext(const FWidgetSearchContext& Context, FName InputAction, FName IdTag);
    
    UFUNCTION(BlueprintCallable)
    static bool SimulateInputActionByNameOnWidgetByTag(FName InputAction, FName IdTag);
    
    UFUNCTION(BlueprintCallable)
    static bool SimulateClickOnWidgetByTag(FName WidgetTag);
    
    UFUNCTION(BlueprintCallable)
    static bool SearchForWidgetsWithIdTagOnScreen(UPARAM(Ref) FWidgetSearchContext& Context, FName IdTag);
    
    UFUNCTION(BlueprintCallable)
    static void ResetWidgetSearchContext(UPARAM(Ref) FWidgetSearchContext& Context);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveIdTagFromWidget(UUserWidget* UserWidget, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    static void RecordVectorStat(const FString& EventName, FVector Value, UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static void RecordTransformStat(const FString& EventName, FTransform Value, UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static void RecordStringStateStat(const FString& EventName, const FString& Value, UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static void RecordStringStat(const FString& EventName, const FString& Value, UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static void RecordRotationStat(const FString& EventName, FRotator Value, UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static void RecordPositionStat(const FString& EventName, FVector Value, UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static void RecordObjectStat(const FString& EventName, UObject* Value, UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static void RecordIntegerStat(const FString& EventName, int64 Value, UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static void RecordFloatStat(const FString& EventName, float Value, UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static void RecordDurationStat(const FString& EventName, float Value, UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static void RecordDeltaIntStat(const FString& EventName, int64 Value, UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static void RecordDeltaFloatStat(const FString& EventName, float Value, UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static void RecordByteStateStat(const FString& EventName, uint8 Value, UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static void ReadTextFromClipboard(FString& OutText);
    
    UFUNCTION(BlueprintCallable)
    static bool ParseDeckerContextFromJsonString(const FString& Json, FStatViewerDeckerContext& OutContext);
    
    UFUNCTION(BlueprintCallable)
    static UUserWidget* GetUserWidgetWithId(FName IdTag);
    
    UFUNCTION(BlueprintCallable)
    static UUserWidget* GetUserWidgetFromSearchContext(const FWidgetSearchContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetUISelectIdTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetUICancelIdTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSimpleObjectDescription(UObject* Object, const FTestMonkeyClassProperties& Properties);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APawn* GetPlayerPawnInActiveGameWorld(int32 PlayerIdx);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetDisplayWindowAutoLayoutPosition(int32 GameInstance, FVector2D WindowSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FScreenResolutionRHIBP> GetDisplayAdapterScreenResolutions();
    
    UFUNCTION(BlueprintCallable)
    static void AddIdTagToWidget(UUserWidget* UserWidget, FName Tag);
    
};

