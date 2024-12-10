// Copyright Luminous Ember Studios


#include "Character/CtrnCharacterBase.h"

// Sets default values
ACtrnCharacterBase::ACtrnCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ACtrnCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}


