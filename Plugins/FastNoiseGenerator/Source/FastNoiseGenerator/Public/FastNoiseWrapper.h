#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EFastNoise_CellularDistanceFunction.h"
#include "EFastNoise_CellularReturnType.h"
#include "EFastNoise_FractalType.h"
#include "EFastNoise_Interp.h"
#include "EFastNoise_NoiseType.h"
#include "FastNoiseWrapper.generated.h"

UCLASS(Blueprintable)
class FASTNOISEGENERATOR_API UFastNoiseWrapper : public UObject {
    GENERATED_BODY()
public:
    UFastNoiseWrapper();

    UFUNCTION(BlueprintCallable)
    void SetupFastNoise(const EFastNoise_NoiseType NoiseType, const int32 Seed, const float Frequency, const EFastNoise_Interp interp, const EFastNoise_FractalType FractalType, const int32 Octaves, const float Lacunarity, const float Gain, const float CellularJitter, const EFastNoise_CellularDistanceFunction CellularDistanceFunction, const EFastNoise_CellularReturnType CellularReturnType);
    
    UFUNCTION(BlueprintCallable)
    void SetSeed(const int32 Seed);
    
    UFUNCTION(BlueprintCallable)
    void SetReturnType(const EFastNoise_CellularReturnType CellularReturnType);
    
    UFUNCTION(BlueprintCallable)
    void SetOctaves(const int32 Octaves);
    
    UFUNCTION(BlueprintCallable)
    void SetNoiseType(const EFastNoise_NoiseType NoiseType);
    
    UFUNCTION(BlueprintCallable)
    void SetLacunarity(const float Lacunarity);
    
    UFUNCTION(BlueprintCallable)
    void SetInterpolation(const EFastNoise_Interp interp);
    
    UFUNCTION(BlueprintCallable)
    void SetGain(const float Gain);
    
    UFUNCTION(BlueprintCallable)
    void SetFrequency(const float Frequency);
    
    UFUNCTION(BlueprintCallable)
    void SetFractalType(const EFastNoise_FractalType FractalType);
    
    UFUNCTION(BlueprintCallable)
    void SetDistanceFunction(const EFastNoise_CellularDistanceFunction distanceFunction);
    
    UFUNCTION(BlueprintCallable)
    void SetCellularJitter(const float CellularJitter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFastNoise_CellularReturnType GetReturnType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOctaves() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFastNoise_NoiseType GetNoiseType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNoise3D(const float X, const float Y, const float Z) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNoise2D(const float X, const float Y) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLacunarity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFastNoise_Interp GetInterpolation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGain() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFrequency() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFastNoise_FractalType GetFractalType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFastNoise_CellularDistanceFunction GetDistanceFunction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCellularJitter() const;
    
};

