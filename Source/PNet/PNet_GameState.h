#pragma once


#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "PNet_GameState.generated.h"


// Forward Declarations
class AEntity_Base;


UCLASS()
class PNET_API APNet_GameState : public AGameState
{
	GENERATED_BODY()
	
public:
// Variables
// --------------------------------------------------

// ------------------------- Battle
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<AEntity_Base*> SortedTurnOrderArray;

// Functions
// --------------------------------------------------

// -------------------------
	UFUNCTION(BlueprintCallable)
	void NewRound();
};
