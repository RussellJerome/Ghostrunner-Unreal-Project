// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TimelineOML.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class GHOSTRUNNER_API UTimelineOML : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, Category = "TimelineOML")
	class UObject* OwnerObject;

	UPROPERTY(BlueprintReadOnly, Category = "TimelineOML")
	bool bIsIgnoringTimeDilation;

	UPROPERTY(BlueprintReadOnly, Category = "TimelineOML")
	bool bIsTickingOnPause;

	UFUNCTION(BlueprintCallable, Category = "TimelineOML")
	void SetOwner(UObject* NewOwner) {};

	UFUNCTION(BlueprintCallable, Category = "TimelineOML")
	void SetIsTickingOnPause(bool bNewIsTickingOnPause) {};
	
	UFUNCTION(BlueprintCallable, Category = "TimelineOML")
	void SetIsIgnoringTimeDilation(bool bNewIsIgnoringTimeDilation) {};
	
	UFUNCTION(BlueprintCallable, Category = "TimelineOML")
	bool IsValidOwner() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TimelineOML")
	void Invalidate() {};

	UFUNCTION(Blueprintpure, Category = "TimelineOML")
	bool GetIsTickingOnPause() { return false; };
	
	UFUNCTION(Blueprintpure, Category = "TimelineOML")
	bool GetIsIgnoringTimeDilation() { return false; };
};
