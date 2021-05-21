#pragma once


#include "CoreMinimal.h"

#include "PNet_Structs.generated.h"


// Forward Declarations


//------------------------- Entity
USTRUCT(BlueprintType)
struct PNET_API F_IntVector2D
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 X;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Y;

	// Default constructor
	F_IntVector2D()
	{
		X = 0;
		Y = 0;
	}

	F_IntVector2D(int32 NewX, int32 NewY)
	{
		X = NewX;
		Y = NewY;
	}
};


USTRUCT(BlueprintType)
struct PNET_API F_Entity_BattleStats
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Strength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Magic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Endurance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Agility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Luck;

	F_Entity_BattleStats()
	{
		Strength = 1;
		Magic = 1;
		Endurance = 1;
		Agility = 1;
		Luck = 1;
	}

	F_Entity_BattleStats(int32 SetStrength, int32 SetMagic, int32 SetEndurance, int32 SetAgility, int32 SetLuck)
	{
		Strength = SetStrength;
		Magic = SetMagic;
		Endurance = SetEndurance;
		Agility = SetAgility;
		Luck = SetLuck;
	}
};


class PNET_API PNet_Structs
{

};