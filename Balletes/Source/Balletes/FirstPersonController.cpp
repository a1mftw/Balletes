// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstPersonController.h"

// Sets default values
AFirstPersonController::AFirstPersonController()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AutoPossessPlayer = EAutoReceiveInput::Player0;

	bUseControllerRotationYaw = false;

	cam = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	cam->AttachTo(RootComponent);
}

// Called when the game starts or when spawned
void AFirstPersonController::BeginPlay()
{
	Super::BeginPlay();
	
	//set all other weapons to nullptr, spawn with the base weapon
	weapon = nullptr;

}

// Called every frame
void AFirstPersonController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFirstPersonController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAxis("Horizontal", this, &AFirstPersonController::HorizMove);
	InputComponent->BindAxis("Vertical", this, &AFirstPersonController::VertMove);
	InputComponent->BindAxis("HorizRot", this, &AFirstPersonController::HorizRot);
	InputComponent->BindAxis("VertRot", this, &AFirstPersonController::VertRot);
}

void AFirstPersonController::HorizMove(float value)
{
	if (value)
	{
		AddMovementInput(GetActorRightVector(),value);
	}
}

void AFirstPersonController::VertMove(float value)
{
	if (value)
	{
		AddMovementInput(GetActorForwardVector(), value);
	}
}

void AFirstPersonController::HorizRot(float value)
{
	if (value)
	{
		AddActorLocalRotation(FRotator(0, value, 0));
	}
}

void AFirstPersonController::VertRot(float value)
{
	if (value)
	{
		float temp = cam->GetRelativeRotation().Pitch + value;
		if (temp < 65 && temp > -65)
			cam->AddLocalRotation(FRotator(value, 0, 0));
	}
}
