#pragma once


#include "CoreMinimal.h"


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


UENUM(BlueprintType)
enum class E_Arcanas : uint8
{
	E_Fool					UMETA(DisplayName = "O: The Fool"),
	E_Magician				UMETA(DisplayName = "I: The Magician"),
	E_HighPriestess			UMETA(DisplayName = "II: The High Priestess"),
	E_Empress				UMETA(DisplayName = "III: The Empress"),
	E_Emperor				UMETA(DisplayName = "IV: The Emperor"),
	E_Heirophant			UMETA(DisplayName = "V: The Heirophant"),
	E_Lovers				UMETA(DisplayName = "VI: The Lovers"),
	E_Chariot				UMETA(DisplayName = "VII: The Chariot"),
	E_Justice				UMETA(DisplayName = "VIII: Justice"),
	E_Hermit				UMETA(DisplayName = "IX: The Hermit"),
	E_Fortune				UMETA(DisplayName = "X: The Wheel of Fortune"),
	E_Strength				UMETA(DisplayName = "XI: Strength"),
	E_HangedMan				UMETA(DisplayName = "XII: The Hanged Man"),
	E_Death					UMETA(DisplayName = "XIII: Death"),
	E_Temperance			UMETA(DisplayName = "XIV: Temperance"),
	E_Devil					UMETA(DisplayName = "XV: The Devil"),
	E_Tower					UMETA(DisplayName = "XVI: The Tower"),
	E_Star					UMETA(DisplayName = "XVII: The Star"),
	E_Moon					UMETA(DisplayName = "XVIII: The Moon"),
	E_Sun					UMETA(DisplayName = "XIX: The Sun"),
	E_Judgement				UMETA(DisplayName = "XX: Judgement"),
};


class PNET_API PNet_Enums
{

public:

};