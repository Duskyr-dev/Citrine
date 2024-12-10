// Copyright Luminous Ember Studios


#include "CtrnCharacterBase.h"

// Sets default values
ACtrnCharacterBase::ACtrnCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACtrnCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACtrnCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACtrnCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

