#pragma once


#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Actor_TileHighlight.generated.h"


UCLASS()
class PNET_API AActor_TileHighlight : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AActor_TileHighlight();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
