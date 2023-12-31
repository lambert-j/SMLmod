// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildablePipeHyperBooster.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"

AFGBuildablePipeHyperBooster::AFGBuildablePipeHyperBooster() : Super() {
	this->mSplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
	this->ActivePowerConsumption = 0.0;
	this->PipeVelocityBoostImpulse = 0.0;
	this->mSplineComponent->SetupAttachment(RootComponent);
}
bool AFGBuildablePipeHyperBooster::CanProduce_Implementation() const{ return bool(); }
void AFGBuildablePipeHyperBooster::Factory_TickProducing(float dt){ }
float AFGBuildablePipeHyperBooster::GetProducingPowerConsumptionBase() const{ return float(); }
TArray<TPair<UFGPipeConnectionComponentBase*, float>> AFGBuildablePipeHyperBooster::GetPossibleConnectionsToTransitionThrough(AFGCharacterPlayer* charPlayer, UFGPipeConnectionComponentBase* connectionEnteredThrough) const{ return TArray<TPair<UFGPipeConnectionComponentBase*,float>>(); }
EPipeHyperEnterResult AFGBuildablePipeHyperBooster::OnPipeEnterReal(AFGCharacterPlayer* charPlayer, UFGPipeConnectionComponentBase* connectionEnteredThrough, TStructOnScope<FFGPipeHyperBasePipeData>& outPipeData, const TStructOnScope<FFGPipeHyperBasePipeData>& predictionPipeData){ return EPipeHyperEnterResult(); }
bool AFGBuildablePipeHyperBooster::FindDistanceClosestToWorldLocation(AFGCharacterPlayer* charPlayer, const FVector& worldLocation, const FVector& velocity, TStructOnScope<FFGPipeHyperBasePipeData>& out_pipeData, float& out_distance) const{ return bool(); }
float AFGBuildablePipeHyperBooster::GetLengthAlongPipe(AFGCharacterPlayer* charPlayer, const TStructOnScope<FFGPipeHyperBasePipeData>& pipeData){ return float(); }
void AFGBuildablePipeHyperBooster::GetLocationAndRotationAlongPipe(AFGCharacterPlayer* charPlayer, const TStructOnScope<FFGPipeHyperBasePipeData>& pipeData, float distance, FVector& outLocation, FVector& outDirection){ }
UFGPipeConnectionComponentBase* AFGBuildablePipeHyperBooster::GetConnectionToTransitThrough(AFGCharacterPlayer* charPlayer, const TStructOnScope<FFGPipeHyperBasePipeData>& pipeData, float distance, float& outExitOffset){ return nullptr; }
void AFGBuildablePipeHyperBooster::OnPipeExitReal(AFGCharacterPlayer* charPlayer, TStructOnScope<FFGPipeHyperBasePipeData>& pipeData){ }
void AFGBuildablePipeHyperBooster::OnPipeMoveStep(AFGCharacterPlayer* charPlayer, const TStructOnScope<FFGPipeHyperBasePipeData>& pipeData, float stepLength, const FPlayerPipeHyperData& pipeTravelData, float& pipeVelocityReal, float& pipeTempMinSpeed){ }
void AFGBuildablePipeHyperBooster::UpdateTargetConsumption(){ }
