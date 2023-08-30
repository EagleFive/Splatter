// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "ProcObject.generated.h"

UCLASS()
class COLE_SPLATTER_API AProcObject : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProcObject();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Defaults")
		UProceduralMeshComponent* ObjectMesh;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Defaults")
		TArray<FVector> Vertices;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Defaults")
		TArray<int> Triangles;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Defaults")
		TArray<FVector> Normals;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Defaults")
		TArray<FVector2D> UV0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Defaults")
		TArray<FLinearColor> VertexColors;

	TArray<FColor> UpVertexColors;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Defaults")
		TArray<FProcMeshTangent> Tangents;

	void GenerateMesh();

	UFUNCTION(BlueprintCallable)
		void AlterObject(FVector impactPoint);

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Defaults")
		FVector depth;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Defaults")
		float radius;
};
