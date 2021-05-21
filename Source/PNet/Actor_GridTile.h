#pragma once


#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Components/StaticMeshComponent.h"
#include "PNet_Structs.h"

#include "Actor_GridTile.generated.h"


// Forward Declarations
class AEntity_Base;


UCLASS()
class PNET_API AActor_GridTile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AActor_GridTile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

// Variables
// --------------------------------------------------

// ------------------------- Actor
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	F_IntVector2D Coordinates;

// ------------------------- Entity
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	AEntity_Base* OccupyingEntity;

// ------------------------- Constructors
};
