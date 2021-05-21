#include "Actor_CommandRing.h"

#include "Entity_Base.h"


// Sets default values
AActor_CommandRing::AActor_CommandRing()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}


// Called when the game starts or when spawned
void AActor_CommandRing::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void AActor_CommandRing::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Spin this thing
	if (AttachedEntity) {

		SetActorRotation(FRotator(GetActorRotation().Roll, GetActorRotation().Yaw + 1, GetActorRotation().Roll));

		// Reset the yaw if it gets too high
		if (GetActorRotation().Yaw == 360)
			SetActorRotation(FRotator(GetActorRotation().Roll, 0, GetActorRotation().Roll));

		// Reset this actors position if something goes wrong
		if (GetActorLocation().X != AttachedEntity->GetActorLocation().X || GetActorLocation().Y != AttachedEntity->GetActorLocation().Y || GetActorLocation().Z != AttachedEntity->GetActorLocation().Z) {
			SetActorLocation(FVector(AttachedEntity->GetActorLocation().X, AttachedEntity->GetActorLocation().Y, AttachedEntity->GetActorLocation().Z));
			GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Cyan, TEXT("Reset Command Ring Position"));
		}
	}

}


void AActor_CommandRing::SetRingColour(FLinearColor LinearColour)
{
	UMaterialInterface* MaterialInterface = StaticMesh->GetMaterial(0);
	UMaterialInstanceDynamic* DynamicMaterial = StaticMesh->CreateDynamicMaterialInstance(0, MaterialInterface);
	DynamicMaterial->SetVectorParameterValue(FName("Colour"), LinearColour);
}