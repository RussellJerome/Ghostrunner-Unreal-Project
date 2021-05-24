// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LevelSequenceActor.h"
#include "CutsceneManager.generated.h"

UCLASS()
class GHOSTRUNNER_API ACutsceneManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACutsceneManager();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CutsceneManager")
	TArray<class ALevelSequenceActor*> LevelSequenceActors; // 0x220(0x10)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CutsceneManager")
	TArray<class ATriggerBox*> CutscenePlayTriggers; // 0x230(0x10)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CutsceneManager")
	TArray<class ATriggerBox*> DisablePlayerSkillsTriggers; // 0x240(0x10)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CutsceneManager")
	TArray<class ATargetPoint*> PlayerTeleportTransforms; // 0x250(0x10)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CutsceneManager")
	TArray<float> InBlendTimes; // 0x260(0x10)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CutsceneManager")
	TArray<float> OutBlendTimes; // 0x270(0x10)
	
	 //TArray<enum class EViewTargetBlendFunction> OutBlendFunctions; // 0x280(0x10)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CutsceneManager")
	TArray<float> OutBlendExps; // 0x290(0x10)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CutsceneManager")
	TArray<bool> OutLockOutgoings; // 0x2a0(0x10)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CutsceneManager")
	int CurrentCutsceneIndex; // 0x2b0(0x04)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CutsceneManager")
	float DefaultCutscenePlayRate; // 0x2b4(0x04)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CutsceneManager")
	float RestartSkipDuration; // 0x2b8(0x04)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CutsceneManager")
	float RestartTimeTolerance; // 0x2bc(0x04)

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "CutsceneManager")
	void SkipCutscene() {};
	
	UFUNCTION(BlueprintCallable, Category = "CutsceneManager")
	void ResumeCutscene() {};

	UFUNCTION(BlueprintCallable, Category = "CutsceneManager")
	void RestartCutscene() {};

	UFUNCTION(BlueprintCallable, Category = "CutsceneManager")
	void PlayCutscene(int Index) {};

	UFUNCTION(BlueprintCallable, Category = "CutsceneManager")
	void PauseCutscene() {};

	//void OnDisablePlayerSkillTriggerOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	//void OnCutscenePlayTriggerOverlap(class AActor* OverlappedActor, class AActor* OtherActor);

	UFUNCTION(Blueprintpure, Category = "CutsceneManager")
	class ULevelSequencePlayer* GetCutsceneSequencePlayer(int Index) { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "CutsceneManager")
	void EndCutscene() {};

};
