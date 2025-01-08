// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractionComponet.h"

// Sets default values for this component's properties
UInteractionComponet::UInteractionComponet()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UInteractionComponet::BeginPlay()
{
	Super::BeginPlay();

	// ...
}


// Called every frame
void UInteractionComponet::TickComponent(float DeltaTime, ELevelTick TickType,
                                         FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

FString UInteractionComponet::GetInteractionLabel() const
{
	return InteractionLabel;
}

void UInteractionComponet::Interact()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Interact"));
	OnInteract(0);
	OnInteractionStart();
	OnIneractionDelegate.Broadcast();
}

void UInteractionComponet::OnInteractionStart()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("OnInteractionStart"));
}
