// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGScannableDetails.h"

bool FScannableObjectData::operator ==(const FScannableObjectData& other) const{ return bool(); }
bool FScannableObjectData::operator !=(const FScannableObjectData& other) const{ return bool(); }
bool FScannableDetails::HasRequiredSchematic() const{ return bool(); }
TSubclassOf< class UFGSchematic > FScannableDetails::GetRequiredSchematic() const{ return TSubclassOf<class UFGSchematic>(); }
AActor* UFGScannableDetails::FindClosestRelevantActor( UWorld* world, const FVector scanLocation, const float maxRangeSquare, TSubclassOf<AActor> actorClassToScanFor) const{ return nullptr; }
AActor* UFGScannableDetailsHostileCreature::FindClosestRelevantActor(UWorld* world, const FVector scanLocation, const float maxRangeSquared, TSubclassOf<AActor> actorClassToScanFor) const{ return nullptr; }
AActor* UFGScannableDetailsRegrowingPickups::FindClosestRelevantActor(UWorld* world, const FVector scanLocation, const float maxRangeSquared, TSubclassOf<AActor> actorClassToScanFor) const{ return nullptr; }
AActor* UFGScannableDetailsHarddrive::FindClosestRelevantActor(UWorld* world, const FVector scanLocation, const float maxRangeSquared, TSubclassOf<AActor> actorClassToScanFor) const{ return nullptr; }
