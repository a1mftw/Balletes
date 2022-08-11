// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

UCLASS()
class BALLETES_API AWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/*make boolean array for "weapon inventory"*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
		int pistolAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
		int shotgunAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
		int sniperAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
		int succAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
		float pistolShotInterval;

	//UFUNCTION(BlueprintReadWrite, Category = Weapon)
	//	void Fire();
};
