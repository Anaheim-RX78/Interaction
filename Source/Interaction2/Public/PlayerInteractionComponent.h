// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyCapsuleComponent.h"
#include "PlayerInteractionComponent.generated.h"

UCLASS(ClassGroup=(Interaction), meta=(BlueprintSpawnableComponent))
class INTERACTION2_API UPlayerInteractionComponent : public UMyCapsuleComponent
{
	GENERATED_BODY()

public:
	UPlayerInteractionComponent();

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	                    int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
