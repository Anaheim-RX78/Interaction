// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractionComponet.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FBasicInteractionDelegate);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class INTERACTION2_API UInteractionComponet : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UInteractionComponet();

	UPROPERTY(EditAnywhere, Category="Interaction")
	FString InteractionLabel;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

	FString GetInteractionLabel() const;

	UPROPERTY(BlueprintAssignable)
	FBasicInteractionDelegate OnIneractionDelegate;

	void Interact();

	UFUNCTION(BlueprintImplementableEvent)
	void OnInteract(int payload);

	virtual void OnInteractionStart();
};
