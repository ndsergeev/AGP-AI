#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "FlagPickup.generated.h"

UCLASS()
class ADVGAMESPROGRAMMING_API AFlagPickup : public APickup
{
	GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere)
        float SphereRadius;

public:
    void Init() override;
};