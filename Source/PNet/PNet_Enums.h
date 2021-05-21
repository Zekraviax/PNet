#pragma once


#include "CoreMinimal.h"


class PNET_API PNet_Enums
{

public:
	PNet_Enums();
	~PNet_Enums();


// ------------------------- Entity
UENUM(BlueprintType)
enum class E_Entity_SuperTypes : uint8
{
	E_Human,
	E_Persona,
	E_Shadow,
};


UENUM(BlueprintType)
enum class E_Entity_TravelDirection : uint8
{
	E_North,
	E_South,
	E_East,
	E_West,
};


};