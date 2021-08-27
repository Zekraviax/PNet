#pragma once


#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Actor_CommandRing.generated.h"


// Forward Declarations
class AEntity_Base;


UCLASS()
class PNET_API AActor_CommandRing : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AActor_CommandRing();

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
	UStaticMeshComponent* StaticMesh;

// ------------------------- Entity
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	AEntity_Base* AttachedEntity;

// Functions
// --------------------------------------------------

// -------------------------
	UFUNCTION()
	void SetRingColour(FLinearColor LinearColour);

};
