// Copyright WZQ


#include "AureCharacterBase.h"

// Sets default values
AAureCharacterBase::AAureCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAureCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAureCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAureCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

