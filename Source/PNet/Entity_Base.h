#pragma once


#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/PawnMovementComponent.h"
#include "PNet_Structs.h"

#include "Entity_Base.generated.h"


// Forward Declarations
class AActor_CommandRing;


UCLASS()
class PNET_API AEntity_Base : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEntity_Base();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

// Variables
// --------------------------------------------------

// ------------------------- Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* StaticMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UCameraComponent* Camera;

// ------------------------- Constructors
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor_CommandRing> CommandRing_Class;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	AActor_CommandRing* CommandRing_Reference;

// ------------------------- Entity
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	F_Entity_Struct EntityData;

	// Occupied coordinates in world
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	F_IntVector2D TileGridCoordinates;
};
