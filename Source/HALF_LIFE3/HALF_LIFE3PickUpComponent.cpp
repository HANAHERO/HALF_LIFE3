// Copyright Epic Games, Inc. All Rights Reserved.

#include "HALF_LIFE3PickUpComponent.h"

UHALF_LIFE3PickUpComponent::UHALF_LIFE3PickUpComponent()
{
	// Setup the Sphere Collision
	SphereRadius = 32.f;
}

void UHALF_LIFE3PickUpComponent::BeginPlay()
{
	Super::BeginPlay();

	// Register our Overlap Event
	OnComponentBeginOverlap.AddDynamic(this, &UHALF_LIFE3PickUpComponent::OnSphereBeginOverlap);
}

void UHALF_LIFE3PickUpComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Checking if it is a First Person Character overlapping
	AHALF_LIFE3Character* Character = Cast<AHALF_LIFE3Character>(OtherActor);
	if(Character != nullptr)
	{
		// Notify that the actor is being picked up
		OnPickUp.Broadcast(Character);

		// Unregister from the Overlap Event so it is no longer triggered
		OnComponentBeginOverlap.RemoveAll(this);
	}
}
