// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/ArrowComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "BaseWeapon.generated.h"

UCLASS()
class GHOSTRUNNER_API ABaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseWeapon();

	//TArray<UTimelineOML*> TimelinesList;
	//UTimelineOML* WeaponChargeTimeline;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseWeapon")
	UCurveFloat* WeaponChargeFloatCurve;
	
	//UTimelineOML* BetweenAttackTimeline;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseWeapon")
	UCurveFloat* BetweenAttackFloatCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseWeapon")
	bool bIsHacked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseWeapon")
	bool bIsKillingHacked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseWeapon")
	class AEnemyBaseCharacter* EnemyToFocusRef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseWeapon")
	class AEnemyBaseCharacter* HackedEnemyToKillRef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseWeapon")
	TArray<UParticleSystemComponent*> SpawnedParticles;

	UPROPERTY(VisibleAnywhere, Category = "BaseWeapon")
	USceneComponent* SceneRootComponent;

	UPROPERTY(VisibleAnywhere, Category = "BaseWeapon")
	UArrowComponent* ArrowComponent;

	UPROPERTY(VisibleAnywhere, Category = "BaseWeapon")
	USkeletalMeshComponent* MeshComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseWeapon")
	UParticleSystem* ChargeWeaponParticleComponent;

	UPROPERTY(VisibleAnywhere, Category = "BaseWeapon")
	UParticleSystemComponent* SpawnedChargeWeaponParticleComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseWeapon")
	UParticleSystem* WeaponBlastParticleComponent;

	UPROPERTY(VisibleAnywhere, Category = "BaseWeapon")
	UParticleSystemComponent* SpawnedWeaponBlastParticleComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseWeapon")
	float ParticlesPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseWeapon")
	float SlowMotionMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseWeapon")
	float WeaponRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseWeapon")
	float WeaponChargeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseWeapon")
	class APlayerCharacter* PlayerCharacterRef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseWeapon")
	class AEnemyBaseCharacter* WeaponOwningEnemyBaseCharacterRef;

	UFUNCTION(BlueprintCallable, Category = "BaseWeapon")
	void WeaponBlast() {};

	UFUNCTION(BlueprintCallable, Category = "BaseWeapon")
	void StopSlowMotion() {};

	UFUNCTION(BlueprintCallable, Category = "BaseWeapon")
	void StartSlowMotion() {};

	UFUNCTION(BlueprintCallable, Category = "BaseWeapon")
	void RestartWeapon() {};
	
	//void OnWeaponRestart();

	UFUNCTION(BlueprintCallable, Category = "BaseWeapon")
	void ChargeWeapon() {};
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
