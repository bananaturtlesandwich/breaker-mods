#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "PointOfInterestEventDelegate.h"
#include "PointOfInterestComponent.generated.h"

class UDataTable;
class UTexture2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPointOfInterestComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPointOfInterestEvent OnDisplayDataChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPointOfInterestEvent OnRegisteredForSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PointOfInterestName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DefaultDisplayData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoRegister;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegisterWhenClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeregisterWhenFar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float detectionDistance;
    
    UPointOfInterestComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterPoint();
    
    UFUNCTION(BlueprintCallable)
    void StartDistanceCheck();
    
    UFUNCTION(BlueprintCallable)
    void SetRequiresAttention(bool bNewRequiresAttention);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectiveDone(bool bNewObjectiveDone);
    
    UFUNCTION(BlueprintCallable)
    void SetIsHighlighted(bool bNewIsHighlighted);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomIcon(UTexture2D* newIcon);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomDisplayName(FText newDisplayName);
    
    UFUNCTION(BlueprintCallable)
    void RegisterPointFromSave();
    
    UFUNCTION(BlueprintCallable)
    void RegisterPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPointRegistered();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetVerticalityDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool GetRestrictToBiome() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRequiresAttention();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetRadarRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool GetOmitFromMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool GetOmitFromCompass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetObjectiveDone();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsHighlighted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetIconScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetDisplayZOrder() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool GetDisplayName(FText& DisplayName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UTexture2D* GetDisplayIconDone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UTexture2D* GetDisplayIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FLinearColor GetColorTint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool GetClampToMapEdge() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelDistanceCheck();
    
};

