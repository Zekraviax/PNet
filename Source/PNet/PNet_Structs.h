#pragma once


#include "CoreMinimal.h"

#include "Engine/DataTable.h"
#include "PNet_Enums.h"

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
		Strength = 0;
		Magic = 0;
		Endurance = 0;
		Agility = 0;
		Luck = 0;
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


USTRUCT(BlueprintType)
struct PNET_API F_Entity_HealthValues
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CurrentHealthPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaximumHealthPoints;

	F_Entity_HealthValues()
	{
		CurrentHealthPoints = 1;
		MaximumHealthPoints = 1;
	}
};


USTRUCT(BlueprintType)
struct PNET_API F_Entity_SpiritValues
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CurrentSpiritPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaximumSpiritPoints;

	F_Entity_SpiritValues()
	{
		CurrentSpiritPoints = 1;
		MaximumSpiritPoints = 1;
	}
};


USTRUCT(BlueprintType)
struct PNET_API F_Entity_MovementValues
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CurrentMovementPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaximumMovementPoints;

	F_Entity_MovementValues()
	{
		CurrentMovementPoints = 1;
		MaximumMovementPoints = 1;
	}
};


USTRUCT(BlueprintType)
struct PNET_API F_Entity_SocialStats
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Courage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Diligence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Empathy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Talent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Charisma;

	F_Entity_SocialStats()
	{
		Courage = 0;
		Diligence = 0;
		Empathy = 0;
		Talent = 0;
		Charisma = 0;
	}

	F_Entity_SocialStats(int32 SetCourage, int32 SetDiligence, int32 SetEmpathy, int32 SetTalent, int32 SetCharisma)
	{
		Courage = SetCourage;
		Diligence = SetDiligence;
		Empathy = SetEmpathy;
		Talent = SetTalent;
		Charisma = SetCharisma;
	}
};


USTRUCT(BlueprintType)
struct PNET_API F_Entity_Struct : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	E_Arcanas Arcana;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	F_Entity_BattleStats BattleStats;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	F_Entity_SocialStats SocialStats;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	F_Entity_HealthValues HealthPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	F_Entity_SpiritValues SpiritPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	F_Entity_MovementValues MovementPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USkeletalMesh* DefaultSkeletalMesh;

	F_Entity_Struct()
	{

	}
};


class PNET_API PNet_Structs
{

};