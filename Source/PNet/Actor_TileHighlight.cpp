#include "Actor_TileHighlight.h"


// Sets default values
AActor_TileHighlight::AActor_TileHighlight()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AActor_TileHighlight::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActor_TileHighlight::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

