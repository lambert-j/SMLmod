// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGCineCameraComponent.h"

UFGCineCameraComponent::UFGCineCameraComponent() : Super() {
	this->LensSettings.MinFocalLength = 4.0;
	this->LensSettings.MaxFocalLength = 1000.0;
	this->LensSettings.MinFStop = 0.0;
	this->LensSettings.MaxFStop = 22.0;
	this->LensSettings.MinimumFocusDistance = 15.0;
	this->LensSettings.SqueezeFactor = 1.0;
	this->LensSettings.DiaphragmBladeCount = 7;
}
void UFGCineCameraComponent::Photo_SetManualFocusDistance(float manualFocusDistance){ }
void UFGCineCameraComponent::Photo_SetAperture(float aperture){ }
void UFGCineCameraComponent::Photo_FocusTrackLookedAtObject(){ }
void UFGCineCameraComponent::Photo_ResetToDefault(){ }
void UFGCineCameraComponent::StartDelayedDestruction(){ }
void UFGCineCameraComponent::StopDelayedDestruction(){ }
void UFGCineCameraComponent::GetDebugStrings(TArray<FString>& out_debugText){ }
void UFGCineCameraComponent::ShowDebug(){ }
void UFGCineCameraComponent::TraceForObjects( FHitResult& out_hitResult){ }
