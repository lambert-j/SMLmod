// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGClearanceComponent.h"

UFGClearanceComponent::UFGClearanceComponent() : Super() {
	this->mIsSoftClearance = false;
	this->BodyInstance.SetObjectType(ECC_GameTraceChannel4);
	this->BodyInstance.SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	this->BodyInstance.SetCollisionProfileName(TEXT("Clearance"));
	this->Mobility = EComponentMobility::Static;
	this->bCanEverAffectNavigation = false;
}
UFGComplexClearanceComponent::UFGComplexClearanceComponent() : Super() {
	this->BodyInstance.SetObjectType(ECC_GameTraceChannel4);
	this->BodyInstance.SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	this->BodyInstance.SetCollisionProfileName(TEXT("Clearance"));
	this->Mobility = EComponentMobility::Static;
	this->bCanEverAffectNavigation = false;
}
