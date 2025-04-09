// Copyright WZQ

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AureCharacterBase.generated.h"

UCLASS(Abstract)
class MYGAS_API AAureCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	AAureCharacterBase();

protected:
	virtual void BeginPlay() override;
};
