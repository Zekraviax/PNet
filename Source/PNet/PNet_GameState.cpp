#include "PNet_GameState.h"


#include "Entity_Base.h"
#include "EngineUtils.h"


void APNet_GameState::NewRound()
{
	// Clear array, just in case
	SortedTurnOrderArray.Empty();

	for (TActorIterator<AEntity_Base> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		AEntity_Base* FoundEntity = *ActorItr;

		SortedTurnOrderArray.Add(FoundEntity);
	}
}