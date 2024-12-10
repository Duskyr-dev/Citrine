// Copyright Luminous Ember Studios

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CtrnCharacterBase.generated.h"

UCLASS(Abstract)
class CITRINE_API ACtrnCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACtrnCharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
