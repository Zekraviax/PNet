#include "Entity_Base.h"

#include "Actor_CommandRing.h"


// Sets default values
AEntity_Base::AEntity_Base()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Initialize Variables
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");

	RootComponent = StaticMesh;
	SpringArm->SetupAttachment(StaticMesh);
	Camera->SetupAttachment(SpringArm);

	// Construct Command Ring
	//static ConstructorHelpers::FObjectFinder<UBlueprint> CommandRingBlueprintConstruct(TEXT("Blueprint'/Game/Blueprints/Blueprint_CommandRing.Blueprint_CommandRing'"));

	//if (CommandRingBlueprintConstruct.Object) {
	//	CommandRingSubclass = (UClass*)CommandRingBlueprintConstruct.Object->GeneratedClass;
	//}
}


// Called when the game starts or when spawned
void AEntity_Base::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void AEntity_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


// Called to bind functionality to input
void AEntity_Base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

