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
	InputComponent->BindAction("Fire",IE_Pressed,this,&AFirstPersonController::Fire);
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

void AFirstPersonController::Fire()
{
	if (ProjectileClass)
	{
		//cam transform
		FVector CameraLocation;
		FRotator CameraRotation;
		CameraLocation = cam->GetComponentLocation();
		CameraRotation = cam->GetComponentRotation();

		//set offset
		MuzzleOffset.Set(100.0f, 0.0f, 0.0f);

		FVector MuzzleLocation = CameraLocation + FTransform(CameraRotation).TransformVector(MuzzleOffset);

		//skew aim
		FRotator MuzzleRotation = CameraRotation;
		MuzzleRotation.Pitch += 0.0f;

		UWorld* World = GetWorld();

		if (World)
		{
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = GetInstigator();

			//Spawn the projectile
			ABalleteProjectile* Projectile = World->SpawnActor<ABalleteProjectile>(ProjectileClass, MuzzleLocation, MuzzleRotation, SpawnParams);

			if (Projectile)
			{
				FVector LaunchDirection = MuzzleRotation.Vector();
				Projectile->FireInDirection(LaunchDirection);
			}
		}
	}
}
