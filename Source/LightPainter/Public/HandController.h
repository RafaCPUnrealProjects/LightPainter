// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HandController.generated.h"

UCLASS()
class LIGHTPAINTER_API AHandController : public AActor
{
	GENERATED_BODY()
	
public:	
	AHandController();

	void TriggerPressed();
	void TriggerReleased();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

private:
	//Config
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class AStroke> StrokeClass;

	//Components
	UPROPERTY(VisibleAnywhere)
	class UMotionControllerComponent* MotionController;

	//State
	class AStroke* CurrentStroke;
};
