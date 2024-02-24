// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBSTACLEASSAULT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere) // �Ʒ� ���������� ��������Ϳ� �˸���
	int32 My_Int = 99;

	UPROPERTY(EditAnywhere)
	int32 My_Int2 = 99;

	UPROPERTY(EditAnywhere)
	float My_Float = 5.6;

	UPROPERTY(EditAnywhere)
	bool My_Bool = true;
};
