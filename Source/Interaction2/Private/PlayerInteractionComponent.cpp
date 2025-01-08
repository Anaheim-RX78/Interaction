// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerInteractionComponent.h"

#include "InteractionComponet.h"

void UPlayerInteractionComponent::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
                                                 UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
                                                 const FHitResult& SweepResult)
{
	if (OtherActor == nullptr) { return; }
	UInteractionComponet* InteractionComponent = OtherActor->FindComponentByClass<UInteractionComponet>();
	if (InteractionComponent == nullptr) { return; }
	InteractionComponent->Interact();
}

UPlayerInteractionComponent::UPlayerInteractionComponent()
{
	OnComponentBeginOverlap.AddDynamic(this, &UPlayerInteractionComponent::OnOverlapBegin);
}
