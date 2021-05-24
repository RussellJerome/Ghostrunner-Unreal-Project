// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class GHOSTRUNNER_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

	//struct FMulticastInlineDelegate PlayerDeath; // 0x4c8(0x10)
	//struct FMulticastInlineDelegate PlayerRestart; // 0x4d8(0x10)
	/*
	float DeathAnimDuration;
	float DeathPlayerMovementOffset;
	float DefaultDeathPlayerMovementOffset;
	int32_t DeathDirectionEnumInt;
	struct UAnimMontage* DeathAnimMontageFront;
	struct UAnimMontage* DeathAnimMontageBack;
	struct UAnimMontage* DeathAnimMontageLeft;
	struct UAnimMontage* DeathAnimMontageRight;
	struct UAnimMontage* ReboundAnimMontage;
	struct UCameraShake* DeathShakeFront;
	struct UCameraShake* DeathShakeBack;
	struct UCameraShake* DeathShakeLeft;
	struct UCameraShake* DeathShakeRight;

	struct UTimelineOML* UnCrouchTimeline;
	float MinSlideInclination;

	struct UPlayerInputOML* PlayerInput; // 0x558(0x08)

	float InitialGravity; // 0x570(0x04)

	struct UPlayerCharacterAnimations* AnimationBlueprintComponentRef; // 0x578(0x08)
	struct UCurveFloat* WallRunRotationFloatCurve; // 0x580(0x08)
	struct UCurveFloat* WallRunUpliftFloatCurve; // 0x588(0x08)
	struct UCurveFloat* WallRunControlRotationFloatCurve; // 0x590(0x08)
	struct UCurveFloat* EmptyCurve; // 0x598(0x08)
	struct UCurveFloat* WallRunSlowdownCurve; // 0x5a0(0x08)
	float WallrunSpeed; // 0x5a8(0x04)
	float MaxWallrunSpeed; // 0x5ac(0x04)
	float PlayerUpwardTransform; // 0x5b0(0x04)
	float WallJumpForwardStrength; // 0x5b4(0x04)
	float WallJumpNormalStrength; // 0x5b8(0x04)
	float WallJumpHeight; // 0x5bc(0x04)
	float WallrunMinAngleCondition; // 0x5c0(0x04)
	float WallrunMaxAngleCondition; // 0x5c4(0x04)
	bool bCanWallrun; // 0x5c8(0x01)
	bool bCanFroggerJumpOnWall; // 0x5c9(0x01)
	char UnknownData_5CA[0x2]; // 0x5ca(0x02)
	struct FVector LastOnWallLocation; // 0x5cc(0x0c)
	float SameWallRunningCooldown; // 0x5d8(0x04)
	char UnknownData_5DC[0x4]; // 0x5dc(0x04)
	struct UPrimitiveComponent* PreviousWall; // 0x5e0(0x08)
	struct UPrimitiveComponent* PreviousWallPending; // 0x5e8(0x08)
	bool bOnWall; // 0x5f0(0x01)
	bool bWallOnRight; // 0x5f1(0x01)
	bool bWallOnLeft; // 0x5f2(0x01)
	bool bLeftCanFall; // 0x5f3(0x01)
	bool bRightCanFall; // 0x5f4(0x01)
	bool bFrontCanFall; // 0x5f5(0x01)
	bool bBackCanFall; // 0x5f6(0x01)
	char UnknownData_5F7[0x1]; // 0x5f7(0x01)
	struct FVector PreviousForwardVector; // 0x5f8(0x0c)
	struct FVector WallNormal; // 0x604(0x0c)
	struct FVector WallForward; // 0x610(0x0c)
	struct FVector WallRightVector; // 0x61c(0x0c)
	struct FVector CursorRotateVector; // 0x628(0x0c)
	struct FVector IntoWallVector; // 0x634(0x0c)
	struct FVector RunForwardVector; // 0x640(0x0c)
	float WallDistance; // 0x64c(0x04)
	float PlayerZAxisValue; // 0x650(0x04)
	float CameraRotationOnWallrun; // 0x654(0x04)
	float WallrunStartScalarMin; // 0x658(0x04)
	float WallrunStartScalarMax; // 0x65c(0x04)
	char UnknownData_660[0x8]; // 0x660(0x08)
	struct UTimelineOML* WallrunUpliftTimeline; // 0x668(0x08)
	struct UTimelineOML* WallrunRotateTimeline; // 0x670(0x08)
	struct UTimelineOML* WallrunPlaneConstraintTimeline; // 0x678(0x08)
	struct UTimelineOML* WallrunSlowdownPlayerTimeline; // 0x680(0x08)
	char UnknownData_688[0x8]; // 0x688(0x08)
	struct FTimerWrapperOML WallRunSameWallTimeHandle; // 0x690(0x08)
	char UnknownData_698[0x8]; // 0x698(0x08)
	struct UObject* KillcamClass; // 0x6a0(0x08)
	float InvulnerabilityAfterHitTime; // 0x6a8(0x04)
	bool bCanBeHit; // 0x6ac(0x01)
	bool bCanKilledByProjectile; // 0x6ad(0x01)
	bool bIsPlayerDead; // 0x6ae(0x01)
	bool bCanRegenerate; // 0x6af(0x01)
	struct AActor* PlayerKiller; // 0x6b0(0x08)
	char UnknownData_6B8[0x4]; // 0x6b8(0x04)
	float ForwardMinSpeed; // 0x6bc(0x04)
	float ForwardMaxSpeed; // 0x6c0(0x04)
	float LeftRightBackwardMaxSpeed; // 0x6c4(0x04)
	float LeftRightBackwardMinSpeed; // 0x6c8(0x04)
	float CurrentSpeed; // 0x6cc(0x04)
	float CannotUncrouchBelowHeigh; // 0x6d0(0x04)
	float CannotJumpBelowHeight; // 0x6d4(0x04)
	float CannotJumpInCrouchBelowHeight; // 0x6d8(0x04)
	bool bLockPitchRotationMovement; // 0x6dc(0x01)
	bool bLockRollRotationMovement; // 0x6dd(0x01)
	bool bLockYawRotationMovement; // 0x6de(0x01)
	char UnknownData_6DF[0x1]; // 0x6df(0x01)
	float LockPitchRotationValue; // 0x6e0(0x04)
	float LockRollRotationValue; // 0x6e4(0x04)
	float LockYawRotationValue; // 0x6e8(0x04)
	bool bOnZipline; // 0x6ec(0x01)
	char UnknownData_6ED[0x3]; // 0x6ed(0x03)
	struct FMovementSpeed NormalSpeed; // 0x6f0(0x30)
	struct FMovementSpeed RiftSlowmotionSpeed; // 0x720(0x30)
	char UnknownData_750[0x8]; // 0x750(0x08)
	struct FMulticastInlineDelegate StopGrinding; // 0x758(0x10)
	struct UCurveFloat* ClimbAnimationCurve; // 0x768(0x08)
	struct UCameraShake* ClimbCameraShake; // 0x770(0x08)
	float ClimbingZStrength; // 0x778(0x04)
	float EdgeLimitHighClimbing; // 0x77c(0x04)
	bool bCanMoveInAir; // 0x780(0x01)
	bool bIsDashReady; // 0x781(0x01)
	bool bIsAirDashReady; // 0x782(0x01)
	bool bCanClimbOnJumped; // 0x783(0x01)
	bool bIsGrinding; // 0x784(0x01)
	bool bIsGrapling; // 0x785(0x01)
	bool bIsKunaiJumping; // 0x786(0x01)
	bool bIsClimbingWall; // 0x787(0x01)
	bool bInputActionJumpHeldDown; // 0x788(0x01)
	bool bInputActionCrouchHeldDown; // 0x789(0x01)
	bool bClimbAfterWallrun; // 0x78a(0x01)
	char UnknownData_78B[0x1]; // 0x78b(0x01)
	struct FVector PlayerDirection; // 0x78c(0x0c)
	struct FVector ForwardVectorAtSlideStart; // 0x798(0x0c)
	struct FVector PlayerLocationOnClimbStart; // 0x7a4(0x0c)
	struct FVector PlayerLocationOnClimbStartWithOffset; // 0x7b0(0x0c)
	struct FVector LastMovementVector; // 0x7bc(0x0c)
	float SlideSlopeTurnSpeed; // 0x7c8(0x04)
	float SlideSlopeTurnSpeedDelay; // 0x7cc(0x04)
	float SlideSlopeLerpToSlopeSpeed; // 0x7d0(0x04)
	float SlideSlopeMaxAngle; // 0x7d4(0x04)
	float SlideSlopeLerp; // 0x7d8(0x04)
	struct FVector SlideSlopeVector; // 0x7dc(0x0c)
	float FallingSpeed; // 0x7e8(0x04)
	float NotOnGroundTimer; // 0x7ec(0x04)
	float CrouchSpeedNormal; // 0x7f0(0x04)
	char UnknownData_7F4[0xc]; // 0x7f4(0x0c)
	struct UBarkDatabase* JumpEffortSounds; // 0x800(0x08)
	bool bJumped; // 0x808(0x01)
	char UnknownData_809[0x7]; // 0x809(0x07)
	struct UCameraShake* JumpCameraShake; // 0x810(0x08)
	struct UCameraShake* LandLightCameraShake; // 0x818(0x08)
	struct UCameraShake* LandMediumCameraShake; // 0x820(0x08)
	struct UCameraShake* LandBigCameraShake; // 0x828(0x08)
	struct UForceFeedbackEffect* LandMediumPadVibration; // 0x830(0x08)
	struct UForceFeedbackEffect* LandStrongPadVibration; // 0x838(0x08)
	float FirstJumpVelocity; // 0x840(0x04)
	float JumpVelocityMultipler; // 0x844(0x04)
	float JumpForwardMultipler; // 0x848(0x04)
	float SecondJumpVelocity; // 0x84c(0x04)
	float TimeToJumpWithoutGround; // 0x850(0x04)
	bool bCanDoubleJump; // 0x854(0x01)
	bool bWasJumpingPlayer; // 0x855(0x01)
	bool bCanUseClimbing; // 0x856(0x01)
	char UnknownData_857[0x1]; // 0x857(0x01)
	int32_t JumpCounter; // 0x858(0x04)
	bool SuperJumpActive; // 0x85c(0x01)
	char UnknownData_85D[0x3]; // 0x85d(0x03)
	float MinFallingSpeedForLandingEffects; // 0x860(0x04)
	enum class EJumpType CurrentJumpType; // 0x864(0x01)
	char UnknownData_865[0x23]; // 0x865(0x23)
	struct UCurveFloat* DashSlowmotionCurve; // 0x888(0x08)
	struct UCurveFloat* DashStartCurve; // 0x890(0x08)
	struct UCurveFloat* DashEndCurve; // 0x898(0x08)
	bool bIsDashing; // 0x8a0(0x01)
	bool bSlowmotionActive; // 0x8a1(0x01)
	bool bIsInSlowmotion; // 0x8a2(0x01)
	bool bIsDashingInAir; // 0x8a3(0x01)
	char UnknownData_8A4[0x4]; // 0x8a4(0x04)
	struct FTimerWrapperOML DashInAirTimer; // 0x8a8(0x08)
	float PlayerVelocityBeforeDash; // 0x8b0(0x04)
	float CurrentDashCooldown; // 0x8b4(0x04)
	float DashEnergyCost; // 0x8b8(0x04)
	float DashMaxCooldown; // 0x8bc(0x04)
	float SpeedOnGround; // 0x8c0(0x04)
	float DashSlomoDuration; // 0x8c4(0x04)
	float DashSlomoEffectDelay; // 0x8c8(0x04)
	float DashOnEndForce; // 0x8cc(0x04)
	float DashForwardRange; // 0x8d0(0x04)
	float DashSideRange; // 0x8d4(0x04)
	float DashDegreesIndicatingForward; // 0x8d8(0x04)
	float CurrentDashRange; // 0x8dc(0x04)
	float DashSlowmoDelay; // 0x8e0(0x04)
	bool DashedWithSlowmo; // 0x8e4(0x01)
	char UnknownData_8E5[0x3]; // 0x8e5(0x03)
	float FirstDashDegreesBetweenInput; // 0x8e8(0x04)
	float SecondDashDegreesBetweenInput; // 0x8ec(0x04)
	float AirControlDuringDashSlomo; // 0x8f0(0x04)
	float MaxWalkSpeedDuringDashSlomo; // 0x8f4(0x04)
	float MaxAccelerationDuringDashSlomo; // 0x8f8(0x04)
	struct FVector PlayerLocationBeforeDash; // 0x8fc(0x0c)
	struct FVector LocationToDash; // 0x908(0x0c)
	struct FVector LocationAtSlowmoStart; // 0x914(0x0c)
	struct FVector DashOnGroundSafeLocation; // 0x920(0x0c)
	struct FVector DashOnGroundTempLocation; // 0x92c(0x0c)
	struct TArray<enum class EObjectTypeQuery> DashOnGroundObjectsType; // 0x938(0x10)
	struct TArray<struct AActor*> DashOnGroundIgnoredObjects; // 0x948(0x10)
	struct UPostProcessComponent* SlowmotionEffectRef; // 0x958(0x08)
	struct UAudioComponent* DashLoopSoundRef; // 0x960(0x08)
	struct UObject* DashScreenEffectClass; // 0x968(0x08)
	struct AActor* DashScreenRef; // 0x970(0x08)
	struct UCameraShake* DashCameraShake; // 0x978(0x08)
	struct UCurveFloat* DashOnGroundRotationCurve; // 0x980(0x08)
	float DashSpeedMultiplierForward; // 0x988(0x04)
	float DashSpeedMultiplierSide; // 0x98c(0x04)
	bool SecondDashUsed; // 0x990(0x01)
	char UnknownData_991[0x3]; // 0x991(0x03)
	int32_t DashCharges; // 0x994(0x04)
	int32_t DashChargesMax; // 0x998(0x04)
	int32_t LastDashTime; // 0x99c(0x04)
	float RechargingDashTime; // 0x9a0(0x04)
	char UnknownData_9A4[0x4]; // 0x9a4(0x04)
	struct UTimelineOML* DashOnGroundRotationTimeline; // 0x9a8(0x08)
	char UnknownData_9B0[0x8]; // 0x9b0(0x08)
	float MaxAirDashRotation; // 0x9b8(0x04)
	float AirDashRotationTime; // 0x9bc(0x04)
	struct UCurveFloat* AirDashRotationCurve; // 0x9c0(0x08)
	float AirDashSavedSpeed; // 0x9c8(0x04)
	float StandardAirControl; // 0x9cc(0x04)
	struct UTimelineOML* LeftAirDashRotationTimeline; // 0x9d0(0x08)
	struct UTimelineOML* RightAirDashRotationTimeline; // 0x9d8(0x08)
	char UnknownData_9E0[0x4]; // 0x9e0(0x04)
	float PreviousMouseX; // 0x9e4(0x04)
	float PreviousMouseY; // 0x9e8(0x04)
	float MouseAxisValueTurn; // 0x9ec(0x04)
	float MouseAxisValueLookUp; // 0x9f0(0x04)
	float GamepadAxisValueTurn; // 0x9f4(0x04)
	float GamepadAxisValueLookUp; // 0x9f8(0x04)
	float MoveRightInput; // 0x9fc(0x04)
	float MoveForwardInput; // 0xa00(0x04)
	char UnknownData_A04[0x3c]; // 0xa04(0x3c)
	struct USceneComponent* KunaiSpawnPointRef; // 0xa40(0x08)
	struct UCameraComponent* FollowCameraRef; // 0xa48(0x08)
	struct UBoxComponent* KillableObjectTriggerRef; // 0xa50(0x08)
	struct UBoxComponent* SlashThroughBoxRef; // 0xa58(0x08)
	struct USkeletalMeshComponent* HandMeshComponent; // 0xa60(0x08)
	float Health; // 0xa68(0x04)
	int32_t SwordEnergy; // 0xa6c(0x04)
	bool bIsInRiftSlowmotion; // 0xa70(0x01)
	char UnknownData_A71[0x7]; // 0xa71(0x07)
	struct URiftsManager* RiftsManager; // 0xa78(0x08)
	struct UUserWidget* KunaiWidgetRef; // 0xa80(0x08)
	bool bUsesBTDevice; // 0xa88(0x01)
	bool bDashingWithBTDevice; // 0xa89(0x01)
	char UnknownData_A8A[0x6]; // 0xa8a(0x06)
	struct TScriptInterface<None> CurrentSkill; // 0xa90(0x10)
	struct UBaseSkill* CurrentSkillRef; // 0xaa0(0x08)
	struct USkillGrapplingHook* SkillGrapplingRef; // 0xaa8(0x08)
	struct USkillHackingPoint* SkillHackingRef; // 0xab0(0x08)
	float SkillCurrentDuration; // 0xab8(0x04)
	char UnknownData_ABC[0x4]; // 0xabc(0x04)
	struct UPostProcessComponent* XrayPostProcessRef; // 0xac0(0x08)
	struct UPostProcessComponent* FramePostProcessRef; // 0xac8(0x08)
	struct USoundBase* SlideSound; // 0xad0(0x08)
	float SlideSoundVolumeFadeOut; // 0xad8(0x04)
	float SlideSoundVolumeFadeIn; // 0xadc(0x04)
	float SlideSoundBasicMoveementSpeed; // 0xae0(0x04)
	char UnknownData_AE4[0x4]; // 0xae4(0x04)
	struct UCurveFloat* SlidingFovCurve; // 0xae8(0x08)
	bool bIsSliding; // 0xaf0(0x01)
	bool bIgnoreSlidingSlope; // 0xaf1(0x01)
	char UnknownData_AF2[0x6]; // 0xaf2(0x06)
	struct UAudioComponent* AudioSlideComponent; // 0xaf8(0x08)
	struct FTimerWrapperOML AudioSlideComponentStopTimer; // 0xb00(0x08)
	bool bCanStartSlide; // 0xb08(0x01)
	bool bCanChangeSlideSpeed; // 0xb09(0x01)
	bool bLaunchedByLaunchpad; // 0xb0a(0x01)
	bool bWasSliding; // 0xb0b(0x01)
	bool bIsSlidingOnFlatFloor; // 0xb0c(0x01)
	bool bIsCrouching; // 0xb0d(0x01)
	bool bFinishedCrouch; // 0xb0e(0x01)
	bool bCanChangeSlideDirection; // 0xb0f(0x01)
	float FloorSlope; // 0xb10(0x04)
	float SlideLaunchOnFlat; // 0xb14(0x04)
	float SlideLaunchOnSlope; // 0xb18(0x04)
	struct FVector SlideFloorNormal; // 0xb1c(0x0c)
	struct UCurveFloat* UpdateSlidingSpeedCurve; // 0xb28(0x08)
	struct UCurveFloat* UpdateSlidingFloorLerpCurve; // 0xb30(0x08)
	struct USlideLaunchDatabase* SlideLaunchData; // 0xb38(0x08)
	float SlideCooldown; // 0xb40(0x04)
	char UnknownData_B44[0x4]; // 0xb44(0x04)
	struct USceneComponent* SlideRaycastStartPointFrontRef; // 0xb48(0x08)
	struct USceneComponent* SlideRaycastStartPointBackRef; // 0xb50(0x08)
	struct ULongSlideComponent* LongSlideComponent; // 0xb58(0x08)
	struct UTimelineOML* UpdateSlidingTimeline; // 0xb60(0x08)
	struct UTimelineOML* UpdateSlidingSpeedTimeline; // 0xb68(0x08)
	struct UTimelineOML* UpdateSlidingFloorLerpTimeline; // 0xb70(0x08)
	struct UTimelineOML* UpdateSlidingFovTimeline; // 0xb78(0x08)
	char UnknownData_B80[0x38]; // 0xb80(0x38)
	struct FTimerWrapperOML SlideCooldownTimer; // 0xbb8(0x08)
	float ForceOnMeleeBlocked; // 0xbc0(0x04)
	char UnknownData_BC4[0x4]; // 0xbc4(0x04)
	struct UMaterialTypeDatabase* MaterialTypeDatabase; // 0xbc8(0x08)
	float MeleeAttackDistance; // 0xbd0(0x04)
	bool bIsAttackMeleeReady; // 0xbd4(0x01)
	bool bIsAttackingMelee; // 0xbd5(0x01)
	bool bLeftMeleeAttackReady; // 0xbd6(0x01)
	char UnknownData_BD7[0x1]; // 0xbd7(0x01)
	struct TArray<struct AActor*> MeleeAttackObjectsHitted; // 0xbd8(0x10)
	struct USceneComponent* KatanaMesh; // 0xbe8(0x08)
	struct USceneComponent* ArrowDoVFX; // 0xbf0(0x08)
	bool bIsBloodOnScreen; // 0xbf8(0x01)
	bool bIsInBossModeBlock; // 0xbf9(0x01)
	bool bIsInBossMode; // 0xbfa(0x01)
	char UnknownData_BFB[0x1]; // 0xbfb(0x01)
	struct FName BlockTypeName; // 0xbfc(0x08)
	int32_t BlockPhase; // 0xc04(0x04)
	float BlockAnimRatio; // 0xc08(0x04)
	float DetectWallMeleeMaxDistance; // 0xc0c(0x04)
	bool bSwordAbsorbed; // 0xc10(0x01)
	char UnknownData_C11[0x7]; // 0xc11(0x07)
	struct UAimAssistanceComponent* AimAssistance; // 0xc18(0x08)
	bool bIsSnapping; // 0xc20(0x01)
	char UnknownData_C21[0x3]; // 0xc21(0x03)
	int32_t NearestEnemyIndex; // 0xc24(0x04)
	struct FVector VelocityBeforeSnap; // 0xc28(0x0c)
	char UnknownData_C34[0x4]; // 0xc34(0x04)
	struct AActor* PreviousSnappedActor; // 0xc38(0x08)
	struct TArray<struct AEnemyBaseCharacter*> SnapAttackEnemiesArray; // 0xc40(0x10)
	struct UCurveFloat* SnapToEnemyCurve; // 0xc50(0x08)
	struct UCurveFloat* CameraAimAssistCurve; // 0xc58(0x08)
	bool bIsSnapAttackReady; // 0xc60(0x01)
	char UnknownData_C61[0x3]; // 0xc61(0x03)
	float SnapToEnemyOffset; // 0xc64(0x04)
	float SnapSweepErrorOffset; // 0xc68(0x04)
	float SnapStartAttackDistance; // 0xc6c(0x04)
	float LastBlockByEnemyGameTime; // 0xc70(0x04)
	float SnapCooldownAfterBlock; // 0xc74(0x04)
	bool bIsSnappingBlocked; // 0xc78(0x01)
	char UnknownData_C79[0x3]; // 0xc79(0x03)
	float CameraAimAssistMaxAngle; // 0xc7c(0x04)
	struct FVector CameraAimAssistLocation; // 0xc80(0x0c)
	struct FRotator CameraAimAssistRotation; // 0xc8c(0x0c)
	struct UTimelineOML* SnapToEnemyTimeline; // 0xc98(0x08)
	struct UTimelineOML* CameraAimAssistTimeline; // 0xca0(0x08)
	struct AEnemyBaseCharacter* enemyToSnap; // 0xca8(0x08)
	char UnknownData_CB0[0x28]; // 0xcb0(0x28)
	int32_t ActualNumberOfClickToReleasePlayerFromNet; // 0xcd8(0x04)
	bool bIsPlayerCatchedByNet; // 0xcdc(0x01)
	char UnknownData_CDD[0x3]; // 0xcdd(0x03)
	int32_t NumberOfClicksToSetFreeFromNet; // 0xce0(0x04)
	float SpeedAfterBeingCatch; // 0xce4(0x04)
	float JumpVelocityMultiplierWhenCatchedByNet; // 0xce8(0x04)
	char UnknownData_CEC[0x10]; // 0xcec(0x10)
	bool bIsRidingDrone; // 0xcfc(0x01)
	bool bWasRidingDrone; // 0xcfd(0x01)
	bool bIsActiveObjectClose; // 0xcfe(0x01)
	char UnknownData_CFF[0x1]; // 0xcff(0x01)
	struct AEnemyDroneCharacter* DroneRef; // 0xd00(0x08)
	enum class EPlayerDASDirection DirectionDAS; // 0xd08(0x01)
	bool bLHandAttack; // 0xd09(0x01)
	char UnknownData_D0A[0x6]; // 0xd0a(0x06)
	struct APlayerControllerOML* PlayerController; // 0xd10(0x08)
	struct USwordTypesManager* SwordTypesManagerRef; // 0xd18(0x08)
	struct UCapsuleComponent* MainCapsuleRef; // 0xd20(0x08)
	struct UCapsuleComponent* InAirCapsuleRef; // 0xd28(0x08)
	bool IsInvisible; // 0xd30(0x01)
	bool bIsVisible; // 0xd31(0x01)
	char UnknownData_D32[0x6]; // 0xd32(0x06)
	struct UUpgradesValueDatabase* UpgradesValueDatabase; // 0xd38(0x08)
	struct UUpgradesDatabase* UpgradesDatabase; // 0xd40(0x08)
	struct UUpgradesTierDatabase* UpgradesTiersDatabase; // 0xd48(0x08)
	struct TMap<enum class EUpgradeType, enum class None> PlayerUpgradesArray; // 0xd50(0x50)
	struct TArray<struct AInteractivePoint*> InteractivePoints; // 0xda0(0x10)
	struct UMaterialParameterCollection* WeaponFOVParams; // 0xdb0(0x08)
	struct UMaterialParameterCollectionInstance* WeaponFOVParamsInstance; // 0xdb8(0x08)
	float ShakesIntensity; // 0xdc0(0x04)
	char UnknownData_DC4[0x4]; // 0xdc4(0x04)
	struct UInGameHUD* PlayerHUD; // 0xdc8(0x08)
	float SlowmotionValue; // 0xdd0(0x04)
	float CurrentFOV; // 0xdd4(0x04)
	float DefaultFOV; // 0xdd8(0x04)
	char UnknownData_DDC[0x4]; // 0xddc(0x04)
	struct UMaterialParameterCollection* ScreenEffectMaterial; // 0xde0(0x08)
	struct UAnimMontage* ClimbMontage; // 0xde8(0x08)
	struct TArray<struct UCameraShake*> ShakesArray; // 0xdf0(0x10)
	bool bCanCameraRotate; // 0xe00(0x01)
	char UnknownData_E01[0x7]; // 0xe01(0x07)
	struct UCharacterMovementComponent* PlayerCharacterMovement; // 0xe08(0x08)
	struct UTimelineOML* RotationTimelineLeft; // 0xe10(0x08)
	struct UTimelineOML* RotationTimelineRight; // 0xe18(0x08)
	struct UTimelineOML* RotationTimelineZero; // 0xe20(0x08)
	struct UTimelineOML* MoveCharacterOnClimbTimeline; // 0xe28(0x08)
	struct TArray<struct UTimelineOML*> TimelinesList; // 0xe30(0x10)
	char UnknownData_E40[0x8]; // 0xe40(0x08)
	struct TMap<struct FString, float> FovValuesTimelinesMap; // 0xe48(0x50)
	char UnknownData_E98[0x10]; // 0xe98(0x10)
	struct UTimelineOML* DashSlowmotionTimeline; // 0xea8(0x08)
	struct UTimelineOML* DashStartTimeline; // 0xeb0(0x08)
	struct UTimelineOML* DashEndTimeline; // 0xeb8(0x08)

	//void WallrunUpliftPlayer(); // Function Ghostrunner.PlayerCharacter.WallrunUpliftPlayer // Final|Native|Private|BlueprintCallable // @ game+0xdb8140
	//void WallrunUpdatePlaneConstraint(float Val); // Function Ghostrunner.PlayerCharacter.WallrunUpdatePlaneConstraint // Final|Native|Private // @ game+0xdb80c0
	//void WallrunSlowdownUpdate(float Val); // Function Ghostrunner.PlayerCharacter.WallrunSlowdownUpdate // Final|Native|Private // @ game+0xdb8040
	//void WallrunDistanceCorrection(int32_t AngleCorrection, float InDistance); // Function Ghostrunner.PlayerCharacter.WallrunDistanceCorrection // Final|Native|Private|BlueprintCallable // @ game+0xdb7f70
	//void WallrunCharacterRotationUpdate(float Val); // Function Ghostrunner.PlayerCharacter.WallrunCharacterRotationUpdate // Final|Native|Private // @ game+0xdb7ef0
	//void WallrunCharacterRotationFinished(); // Function Ghostrunner.PlayerCharacter.WallrunCharacterRotationFinished // Final|Native|Private|Const // @ game+0x8c27f0
	//void WallrunCharacterRotation(); // Function Ghostrunner.PlayerCharacter.WallrunCharacterRotation // Final|Native|Private|BlueprintCallable // @ game+0xdb7ed0
	//void UpliftPlayerWallrun(float Val); // Function Ghostrunner.PlayerCharacter.UpliftPlayerWallrun // Final|Native|Private // @ game+0xdb7e50
	//void UpdateSpeedOnSlideEnd(); // Function Ghostrunner.PlayerCharacter.UpdateSpeedOnSlideEnd // Event|Protected|BlueprintCallable|BlueprintEvent // @ game+0x10f6c80
	//void UpdateSlidingSpeed(float Val); // Function Ghostrunner.PlayerCharacter.UpdateSlidingSpeed // Final|Native|Private // @ game+0xdb7dd0
	//void UpdateSlidingFov(float Val); // Function Ghostrunner.PlayerCharacter.UpdateSlidingFov // Final|Native|Private // @ game+0xdb7d50
	//void UpdateSlidingFloorLerp(float Val); // Function Ghostrunner.PlayerCharacter.UpdateSlidingFloorLerp // Final|Native|Private // @ game+0xdb7cd0
	//void UpdateShakePlayRate(struct UCameraShake* CameraShake, float Value); // Function Ghostrunner.PlayerCharacter.UpdateShakePlayRate // Final|Native|Protected // @ game+0xdb7c00
	//void UpdateDeflectBoxScale(); // Function Ghostrunner.PlayerCharacter.UpdateDeflectBoxScale // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0xdb7be0
	//void UnlockPlayerMovementAbility(); // Function Ghostrunner.PlayerCharacter.UnlockPlayerMovementAbility // Final|Native|Public|BlueprintCallable // @ game+0xdb7ab0
	//void UnCrouchTimelineUpdate(float DeltaTime); // Function Ghostrunner.PlayerCharacter.UnCrouchTimelineUpdate // Native|Protected|BlueprintCallable // @ game+0xdb7a10
	//void UnCrouchTimelineStop(); // Function Ghostrunner.PlayerCharacter.UnCrouchTimelineStop // Native|Protected|BlueprintCallable // @ game+0xd60450
	//void UncrouchReleased(); // Function Ghostrunner.PlayerCharacter.UncrouchReleased // Final|Native|Public|BlueprintCallable // @ game+0xdb7a90
	//void UIEnabled(bool UIEnable); // Function Ghostrunner.PlayerCharacter.UIEnabled // Final|Native|Public // @ game+0xdb7980
	//bool TrySlideOnForwardInput(float AxisValue); // Function Ghostrunner.PlayerCharacter.TrySlideOnForwardInput // Final|Native|Private|BlueprintCallable // @ game+0xdb78f0
	//void ToggleXrayPostProcess(bool Active, bool Force); // Function Ghostrunner.PlayerCharacter.ToggleXrayPostProcess // Final|Native|Public|BlueprintCallable // @ game+0xdb7820
	//void ToggleSlowmotionWithEffect(bool Active); // Function Ghostrunner.PlayerCharacter.ToggleSlowmotionWithEffect // Final|Native|Public|BlueprintCallable // @ game+0xdb7790
	//void ToggleFramePostProcess(bool Active); // Function Ghostrunner.PlayerCharacter.ToggleFramePostProcess // Final|Native|Public|BlueprintCallable // @ game+0xdb7700
	//void TiltRotationDashOnGround(float Angle); // Function Ghostrunner.PlayerCharacter.TiltRotationDashOnGround // Final|Native|Public|BlueprintCallable // @ game+0xdb7680
	//void TickSkillCooldown(); // Function Ghostrunner.PlayerCharacter.TickSkillCooldown // Final|Native|Private|BlueprintCallable // @ game+0xdb7660
	//void ThrowShuriken(); // Function Ghostrunner.PlayerCharacter.ThrowShuriken // Final|Native|Public|BlueprintCallable // @ game+0xdb7640
	//void StopWallrunWithLaunch(); // Function Ghostrunner.PlayerCharacter.StopWallrunWithLaunch // Final|Native|Private|BlueprintCallable // @ game+0xdb7620
	//void StopWallrunRotation(); // Function Ghostrunner.PlayerCharacter.StopWallrunRotation // Final|Native|Private|BlueprintCallable // @ game+0xdb7600
	//void StopWallrunLate(); // Function Ghostrunner.PlayerCharacter.StopWallrunLate // Final|Native|Private // @ game+0xdb75e0
	//void StopWallrunBP(); // Function Ghostrunner.PlayerCharacter.StopWallrunBP // Final|Native|Private|BlueprintCallable // @ game+0xdb75c0
	//void StopWalkSpeedBPTimelines(); // Function Ghostrunner.PlayerCharacter.StopWalkSpeedBPTimelines // Native|Event|Protected|BlueprintCallable|BlueprintEvent // @ game+0xdb75a0
	//void StopUplift(); // Function Ghostrunner.PlayerCharacter.StopUplift // Final|Native|Private|BlueprintCallable // @ game+0xdb7580
	//void StopTimeForPlayer(); // Function Ghostrunner.PlayerCharacter.StopTimeForPlayer // Final|Native|Public // @ game+0xdb7560
	//void StopSnapToEnemy(); // Function Ghostrunner.PlayerCharacter.StopSnapToEnemy // Final|Native|Protected|BlueprintCallable // @ game+0xdb7540
	//void StopSlidingLate(); // Function Ghostrunner.PlayerCharacter.StopSlidingLate // Final|Native|Private // @ game+0xdb7520
	//void StopSliding(); // Function Ghostrunner.PlayerCharacter.StopSliding // Final|Native|Public|BlueprintCallable // @ game+0xdb7500
	//void StopRotationDashOnGroundTimeline(); // Function Ghostrunner.PlayerCharacter.StopRotationDashOnGroundTimeline // Final|Native|Public|BlueprintCallable|Const // @ game+0xdb74e0
	//void StopGrinding__DelegateSignature(); // DelegateFunction Ghostrunner.PlayerCharacter.StopGrinding__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x10f6c80
	//void StopDashSetFieldOfView(); // Function Ghostrunner.PlayerCharacter.StopDashSetFieldOfView // Final|Native|Private // @ game+0xdb74c0
	//void StopDashOnGround(); // Function Ghostrunner.PlayerCharacter.StopDashOnGround // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0xdb74a0
	//void StopClimbing(); // Function Ghostrunner.PlayerCharacter.StopClimbing // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0xd5ea40
	//void StopAttackDetection(); // Function Ghostrunner.PlayerCharacter.StopAttackDetection // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0xdb7480
	//void StopAccelerationTimelines(); // Function Ghostrunner.PlayerCharacter.StopAccelerationTimelines // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0xd5e890
	//void StartSlidingInternalLate(); // Function Ghostrunner.PlayerCharacter.StartSlidingInternalLate // Final|Native|Private // @ game+0xdb7460
	//void StartSliding(); // Function Ghostrunner.PlayerCharacter.StartSliding // Final|Native|Public|BlueprintCallable // @ game+0xdb7440
	//void StartPlayerSnapMeleeAttack(); // Function Ghostrunner.PlayerCharacter.StartPlayerSnapMeleeAttack // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x7e70d0
	//void SpawnMeleeAttackParticle(struct FObjectHittedData Data); // Function Ghostrunner.PlayerCharacter.SpawnMeleeAttackParticle // Final|Native|Public|BlueprintCallable // @ game+0xdb73a0
	//void SnapToEnemyUpdate(float Val); // Function Ghostrunner.PlayerCharacter.SnapToEnemyUpdate // Final|Native|Private // @ game+0xdb7320
	//void SnapToEnemy(); // Function Ghostrunner.PlayerCharacter.SnapToEnemy // Final|Native|Protected|BlueprintCallable // @ game+0xdb7300
	//void SlideSoundStop(); // Function Ghostrunner.PlayerCharacter.SlideSoundStop // Final|Native|Protected // @ game+0xdb72e0
	//void SlideSoundStart(); // Function Ghostrunner.PlayerCharacter.SlideSoundStart // Final|Native|Protected|BlueprintCallable // @ game+0xdb72c0
	//void SetWorldTimeDilationWithoutPlayer(float timeDilation, float PlayerTimeDilation, enum class ETimeDilationType TimeDilationType, bool Revert); // Function Ghostrunner.PlayerCharacter.SetWorldTimeDilationWithoutPlayer // Final|Native|Public|BlueprintCallable // @ game+0xdb70f0
	//void SetWorldTimeDilation(float timeDilation); // Function Ghostrunner.PlayerCharacter.SetWorldTimeDilation // Final|Native|Public|BlueprintCallable // @ game+0xdb7070
	//void SetSnappingBlock(bool Block); // Function Ghostrunner.PlayerCharacter.SetSnappingBlock // Final|Native|Public|BlueprintCallable // @ game+0xdb6fe0
	//void SetShakesIntensity(float Value); // Function Ghostrunner.PlayerCharacter.SetShakesIntensity // Final|Native|Public|BlueprintCallable // @ game+0xdb6f60
	//void SetPlayerImmortal(bool Immortal); // Function Ghostrunner.PlayerCharacter.SetPlayerImmortal // Final|Native|Public|BlueprintCallable // @ game+0xdb6ed0
	//void SetDepthStateForEnemies(); // Function Ghostrunner.PlayerCharacter.SetDepthStateForEnemies // Final|Native|Public|BlueprintCallable // @ game+0xdb6eb0
	//void SaveInputSettingsForUpgrades(); // Function Ghostrunner.PlayerCharacter.SaveInputSettingsForUpgrades // Final|Native|Public|BlueprintCallable // @ game+0xdb6e90
	//void RotationDashOnGroundUpdate(float Val); // Function Ghostrunner.PlayerCharacter.RotationDashOnGroundUpdate // Final|Native|Public // @ game+0xdb6de0
	//void RotatePlayerOnWallrunZero(float Val); // Function Ghostrunner.PlayerCharacter.RotatePlayerOnWallrunZero // Final|Native|Private|Const // @ game+0xdb6d60
	//void RotatePlayerOnWallrunRight(float Val); // Function Ghostrunner.PlayerCharacter.RotatePlayerOnWallrunRight // Final|Native|Private|Const // @ game+0xdb6ce0
	//void RotatePlayerOnWallrunLeft(float Val); // Function Ghostrunner.PlayerCharacter.RotatePlayerOnWallrunLeft // Final|Native|Private|Const // @ game+0xdb6c60
	//void RevertMovementSpeedValuesAfterReleaseFromNet(); // Function Ghostrunner.PlayerCharacter.RevertMovementSpeedValuesAfterReleaseFromNet // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x10f6c80
	//void ReturnCameraRotationWallrunLate(); // Function Ghostrunner.PlayerCharacter.ReturnCameraRotationWallrunLate // Final|Native|Private // @ game+0xdb6c40
	//void ReturnCameraRotationWallrun(); // Function Ghostrunner.PlayerCharacter.ReturnCameraRotationWallrun // Final|Native|Private|BlueprintCallable // @ game+0xdb6c20
	//void RestoreMoveInAir(); // Function Ghostrunner.PlayerCharacter.RestoreMoveInAir // Final|Native|Private // @ game+0xdb6c00
	//void ResetSnapToEnemy(); // Function Ghostrunner.PlayerCharacter.ResetSnapToEnemy // Final|Native|Public|BlueprintCallable // @ game+0xdb6be0
	//void ResetRotationDashOnGround(); // Function Ghostrunner.PlayerCharacter.ResetRotationDashOnGround // Final|Native|Public|BlueprintCallable // @ game+0xdb6bc0
	//void ResetRightAccelerationFlag(); // Function Ghostrunner.PlayerCharacter.ResetRightAccelerationFlag // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0xd60090
	//void ResetPreviousWall(); // Function Ghostrunner.PlayerCharacter.ResetPreviousWall // Final|Native|Private // @ game+0xdb6ba0
	//void ResetJumpCounter(); // Function Ghostrunner.PlayerCharacter.ResetJumpCounter // Final|Native|Public|BlueprintCallable // @ game+0xdb6b80
	//void ResetJump(); // Function Ghostrunner.PlayerCharacter.ResetJump // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0xd60430
	//void ResetInaccessibleStats(); // Function Ghostrunner.PlayerCharacter.ResetInaccessibleStats // Final|Native|Public|BlueprintCallable // @ game+0xdb6b60
	//void ResetHandsAnim(); // Function Ghostrunner.PlayerCharacter.ResetHandsAnim // Final|Native|Public|BlueprintCallable // @ game+0xdb6b40
	//void ResetForwardAccelerationFlag(); // Function Ghostrunner.PlayerCharacter.ResetForwardAccelerationFlag // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0xdb6b20
	//void ResetFieldOfView(); // Function Ghostrunner.PlayerCharacter.ResetFieldOfView // Final|Native|Public|BlueprintCallable // @ game+0xdb6b00
	//void ResetDash(); // Function Ghostrunner.PlayerCharacter.ResetDash // Final|Native|Public|BlueprintCallable // @ game+0xdb6ae0
	//void ReleaseCrouch(); // Function Ghostrunner.PlayerCharacter.ReleaseCrouch // Final|Native|Public|BlueprintCallable // @ game+0xdb6a30
	//void RaycastInFourDirectionWallRun(bool HittedLeftWall, bool HittedRightWall); // Function Ghostrunner.PlayerCharacter.RaycastInFourDirectionWallRun // Final|Native|Private|HasOutParms|BlueprintCallable // @ game+0xdb6820
	//bool PressCrouch(); // Function Ghostrunner.PlayerCharacter.PressCrouch // Final|Native|Public|BlueprintCallable // @ game+0xdb67f0
	//void PlayReboundAnimationMontage(); // Function Ghostrunner.PlayerCharacter.PlayReboundAnimationMontage // Final|Native|Public|BlueprintCallable // @ game+0xdb6710
	//void PlayOnDeathMontage(struct UAnimMontage* AnimMontage, float Ratio, struct FName SectionName, int32_t RandNum); // Function Ghostrunner.PlayerCharacter.PlayOnDeathMontage // Event|Public|BlueprintEvent // @ game+0x10f6c80
	//void PlayerLandingLate(); // Function Ghostrunner.PlayerCharacter.PlayerLandingLate // Final|Native|Private // @ game+0xdb67d0
	//void PlayerLanding(); // Function Ghostrunner.PlayerCharacter.PlayerLanding // Final|Native|Private|BlueprintCallable // @ game+0xdb67b0
	//void PlayerJump(); // Function Ghostrunner.PlayerCharacter.PlayerJump // Final|Native|Private|BlueprintCallable // @ game+0xdb6790
	//void PlayerDashSlomo(); // Function Ghostrunner.PlayerCharacter.PlayerDashSlomo // Final|Native|Public // @ game+0xdb6770
	//void PlayerDashLate(); // Function Ghostrunner.PlayerCharacter.PlayerDashLate // Final|Native|Public // @ game+0xdb6750
	//void PlayerDash(); // Function Ghostrunner.PlayerCharacter.PlayerDash // Final|Native|Public|BlueprintCallable // @ game+0xdb6730
	//void PlayDeathShake(); // Function Ghostrunner.PlayerCharacter.PlayDeathShake // Final|Native|Public // @ game+0xdb66f0
	//void PlayDashAnimation(); // Function Ghostrunner.PlayerCharacter.PlayDashAnimation // Final|Native|Public|BlueprintCallable // @ game+0xdb66d0
	//void PlayCameraShakeOML(struct UCameraShake* CameraShake); // Function Ghostrunner.PlayerCharacter.PlayCameraShakeOML // Final|Native|Public|BlueprintCallable // @ game+0xdb6650
	//void OnUnpause(); // Function Ghostrunner.PlayerCharacter.OnUnpause // Final|Native|Private // @ game+0xdb6630
	//void OnStartDashOnGround(); // Function Ghostrunner.PlayerCharacter.OnStartDashOnGround // Final|Native|Public|BlueprintCallable // @ game+0xdb6610
	//void OnSnappingTriggerEndOverlap(struct AActor* Actor); // Function Ghostrunner.PlayerCharacter.OnSnappingTriggerEndOverlap // Final|Native|Protected|BlueprintCallable // @ game+0xdb6590
	//void OnSnappingTriggerBeginOverlap(struct AActor* Actor); // Function Ghostrunner.PlayerCharacter.OnSnappingTriggerBeginOverlap // Final|Native|Protected|BlueprintCallable // @ game+0xdb6510
	//void OnSlidingStarted(bool StrongSlide, bool FromJump); // Function Ghostrunner.PlayerCharacter.OnSlidingStarted // Native|Event|Protected|BlueprintEvent // @ game+0xdb6440
	//void OnPlayerLand(); // Function Ghostrunner.PlayerCharacter.OnPlayerLand // Final|Native|Private|BlueprintCallable // @ game+0xdb6420
	//void OnPlayerDeath(float PlayRate, struct FName SectionName, struct FRotator FocusRotation, struct FVector HitDirection, bool bUseCameraRotation, bool bUseMovement); // Function Ghostrunner.PlayerCharacter.OnPlayerDeath // Event|Public|HasDefaults|BlueprintEvent // @ game+0x10f6c80
	//void OnPause(); // Function Ghostrunner.PlayerCharacter.OnPause // Final|Native|Private // @ game+0xdb6400
	//void OnFovChanged(int32_t InFov); // Function Ghostrunner.PlayerCharacter.OnFovChanged // Final|Native|Protected // @ game+0xdb6360
	//void OnDroneRideUncrouch(); // Function Ghostrunner.PlayerCharacter.OnDroneRideUncrouch // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x10f6c80
	//void OnDashOnGroundEnd(struct FVector DashDirection); // Function Ghostrunner.PlayerCharacter.OnDashOnGroundEnd // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xdb6290
	//void OnDashEnd(); // Function Ghostrunner.PlayerCharacter.OnDashEnd // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0xdb6270
	//void OnCheckpointRestartEvent(); // Function Ghostrunner.PlayerCharacter.OnCheckpointRestartEvent // Event|Public|BlueprintEvent // @ game+0x10f6c80
	//void OnCheckpointRestart(); // Function Ghostrunner.PlayerCharacter.OnCheckpointRestart // Final|Native|Public|BlueprintCallable // @ game+0xdb6250
	//void OnCheckpointReached(); // Function Ghostrunner.PlayerCharacter.OnCheckpointReached // Final|Native|Public|BlueprintCallable // @ game+0xdb6230
	//bool MoveRight(float AxisValue); // Function Ghostrunner.PlayerCharacter.MoveRight // Final|Native|Private|BlueprintCallable // @ game+0xdb60e0
	//void MoveForwardForAutomationTests(float AxisValue); // Function Ghostrunner.PlayerCharacter.MoveForwardForAutomationTests // Final|Native|Private|BlueprintCallable // @ game+0xdb6060
	//bool MoveForward(float AxisValue); // Function Ghostrunner.PlayerCharacter.MoveForward // Final|Native|Private|BlueprintCallable // @ game+0xdb5fd0
	//void MoveCharacterOnClimbUpdate(float Val); // Function Ghostrunner.PlayerCharacter.MoveCharacterOnClimbUpdate // Final|Native|Private // @ game+0xdb5f50
	//void MoveCharacterOnClimbFinishedLate(float InValue); // Function Ghostrunner.PlayerCharacter.MoveCharacterOnClimbFinishedLate // Final|Native|Private // @ game+0xdb5ed0
	//void MoveCharacterOnClimbFinished(); // Function Ghostrunner.PlayerCharacter.MoveCharacterOnClimbFinished // Final|Native|Private // @ game+0xdb5eb0
	//void MoveCameraToKillerPositionImpl(struct AActor* KillerEnemyLocal); // Function Ghostrunner.PlayerCharacter.MoveCameraToKillerPositionImpl // Native|Event|Protected|BlueprintCallable|BlueprintEvent // @ game+0xdb5e20
	//bool MeleeAttackStart(); // Function Ghostrunner.PlayerCharacter.MeleeAttackStart // Final|Native|Public|BlueprintCallable // @ game+0xdb5df0
	//struct FObjectHittedData MeleeAttackCheckHittedObjects(struct UStaticMeshComponent* Trigger); // Function Ghostrunner.PlayerCharacter.MeleeAttackCheckHittedObjects // Final|Native|Public|BlueprintCallable // @ game+0xdb5d50
	//void LoadInputSettingsForUpgrades(); // Function Ghostrunner.PlayerCharacter.LoadInputSettingsForUpgrades // Final|Native|Public|BlueprintCallable // @ game+0xdb5d30
	//void LimitLookingAround(float AngleLimit); // Function Ghostrunner.PlayerCharacter.LimitLookingAround // Final|Native|Public|BlueprintCallable // @ game+0xdb5c00
	//void LaunchCharacterAfterLandingCon(); // Function Ghostrunner.PlayerCharacter.LaunchCharacterAfterLandingCon // Final|Native|Private|BlueprintCallable // @ game+0xdb5be0
	//void LaunchCharacterAfterLanding(); // Function Ghostrunner.PlayerCharacter.LaunchCharacterAfterLanding // Native|Event|Protected|BlueprintCallable|BlueprintEvent // @ game+0xdb5bc0
	//void KillPlayerInsta(enum class EPlayerDeathType PlayerDeathType, struct FVector HitDirection); // Function Ghostrunner.PlayerCharacter.KillPlayerInsta // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xdb5af0
	//void KeepUpdatingSlide(float Val); // Function Ghostrunner.PlayerCharacter.KeepUpdatingSlide // Final|Native|Private // @ game+0xdb5a70
	//bool IsSnapping(); // Function Ghostrunner.PlayerCharacter.IsSnapping // Final|Native|Public|BlueprintCallable // @ game+0xdb5a40
	//bool IsOnWall(); // Function Ghostrunner.PlayerCharacter.IsOnWall // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xdb5a10
	//bool IsInvisibleFromCheats(); // Function Ghostrunner.PlayerCharacter.IsInvisibleFromCheats // Final|Native|Public|BlueprintCallable // @ game+0xdb5950
	//bool IsEnemyVisible(struct AEnemyBaseCharacter* Enemy); // Function Ghostrunner.PlayerCharacter.IsEnemyVisible // Final|Native|Public|BlueprintCallable // @ game+0xdb58c0
	//bool IsDashForward(); // Function Ghostrunner.PlayerCharacter.IsDashForward // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0xdb5890
	//bool IsDashEndInAir(struct FVector EndDashLocation); // Function Ghostrunner.PlayerCharacter.IsDashEndInAir // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xdb57f0
	//bool IsCrouchOnToggle(); // Function Ghostrunner.PlayerCharacter.IsCrouchOnToggle // Final|Native|Protected|BlueprintCallable // @ game+0xdb57c0
	//bool IsBlockedFromAbove(); // Function Ghostrunner.PlayerCharacter.IsBlockedFromAbove // Final|Native|Private|BlueprintCallable|BlueprintPure|Const // @ game+0xdb5790
	//void InvokeStopDashOnGround(); // Function Ghostrunner.PlayerCharacter.InvokeStopDashOnGround // Final|Native|Private // @ game+0xdb5770
	//void InputDashReleased(); // Function Ghostrunner.PlayerCharacter.InputDashReleased // Final|Native|Public|BlueprintCallable // @ game+0xdb5750
	//bool HoldingForwardBackwardKey(); // Function Ghostrunner.PlayerCharacter.HoldingForwardBackwardKey // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xdb56a0
	//bool HasPlayedJumpEffort(); // Function Ghostrunner.PlayerCharacter.HasPlayedJumpEffort // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xdb5670
	//float GetYaw(); // Function Ghostrunner.PlayerCharacter.GetYaw // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xdb5640
	//bool GetWasSliding(); // Function Ghostrunner.PlayerCharacter.GetWasSliding // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xdb5610
	//struct FVector GetPlayerRightVector(); // Function Ghostrunner.PlayerCharacter.GetPlayerRightVector // Final|Native|Private|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0xdb5520
	//struct FVector GetPlayerForwardVector(); // Function Ghostrunner.PlayerCharacter.GetPlayerForwardVector // Final|Native|Private|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0xdb54e0
	//struct UCharacterMovementComponent* GetPlayerCharacterMovement(); // Function Ghostrunner.PlayerCharacter.GetPlayerCharacterMovement // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xdb54b0
	//float GetPitch(); // Function Ghostrunner.PlayerCharacter.GetPitch // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xdb5480
	//float GetMoveRight(); // Function Ghostrunner.PlayerCharacter.GetMoveRight // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xdb51b0
	//float GetMoveForward(); // Function Ghostrunner.PlayerCharacter.GetMoveForward // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xdb5180
	//bool GetIsInvisible(); // Function Ghostrunner.PlayerCharacter.GetIsInvisible // Final|Native|Public|BlueprintCallable // @ game+0xdb5150
	//bool GetIsCrouching(); // Function Ghostrunner.PlayerCharacter.GetIsCrouching // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xdb5120
	//struct FHitResult GetHitResultRight(); // Function Ghostrunner.PlayerCharacter.GetHitResultRight // Final|Native|Private|BlueprintCallable|BlueprintPure|Const // @ game+0xdb5090
	//struct FHitResult GetHitResultLeft(); // Function Ghostrunner.PlayerCharacter.GetHitResultLeft // Final|Native|Private|BlueprintCallable|BlueprintPure|Const // @ game+0xdb5000
	//struct FHitResult GetHitResultForward(); // Function Ghostrunner.PlayerCharacter.GetHitResultForward // Final|Native|Private|BlueprintCallable|BlueprintPure|Const // @ game+0xdb4f70
	//struct FHitResult GetHitResultBack(); // Function Ghostrunner.PlayerCharacter.GetHitResultBack // Final|Native|Private|BlueprintCallable|BlueprintPure|Const // @ game+0xdb4ee0
	//struct USkeletalMeshComponent* GetHandMeshComponent(); // Function Ghostrunner.PlayerCharacter.GetHandMeshComponent // Final|Native|Public|BlueprintCallable // @ game+0xdb4eb0
	//enum class EPhysicalSurface GetFloorSurface(); // Function Ghostrunner.PlayerCharacter.GetFloorSurface // Final|Native|Private|BlueprintCallable // @ game+0xdb4e80
	//float GetDistanceToActor(struct AActor* OtherActor); // Function Ghostrunner.PlayerCharacter.GetDistanceToActor // Final|Native|Public // @ game+0xdb4de0
	//float GetCurveTimeByValue(struct UCurveFloat* Curve, float Value); // Function Ghostrunner.PlayerCharacter.GetCurveTimeByValue // Final|Native|Private|BlueprintCallable // @ game+0xdb4d10
	//float GetCurrentDashDegreesBetweenInput(); // Function Ghostrunner.PlayerCharacter.GetCurrentDashDegreesBetweenInput // Final|Native|Public|BlueprintCallable // @ game+0xdb4ce0
	//struct TArray<struct AActor*> GetAllEnemies(); // Function Ghostrunner.PlayerCharacter.GetAllEnemies // Final|Native|Public|BlueprintCallable // @ game+0xdb4c60
	//void FreeLookingAround(); // Function Ghostrunner.PlayerCharacter.FreeLookingAround // Final|Native|Public|BlueprintCallable // @ game+0xdb4c40
	//void ForceStartSliding(bool FromJump, bool WithLaunch); // Function Ghostrunner.PlayerCharacter.ForceStartSliding // Final|Native|Public|BlueprintCallable // @ game+0xdb4b70
	//void ExecuteWallRun(); // Function Ghostrunner.PlayerCharacter.ExecuteWallRun // Final|Native|Private|BlueprintCallable // @ game+0xdb43a0
	//void EnterRiftSlowmotion(bool InRift); // Function Ghostrunner.PlayerCharacter.EnterRiftSlowmotion // Final|Native|Public|BlueprintCallable // @ game+0xdb4310
	//void EnemyIndicatorRotateMouse(); // Function Ghostrunner.PlayerCharacter.EnemyIndicatorRotateMouse // Final|Native|Private|BlueprintCallable // @ game+0xdb42f0
	//void DropFromWallWithLaunch(float LaunchForce, float ForwardMultiplier, float SideMultiplied); // Function Ghostrunner.PlayerCharacter.DropFromWallWithLaunch // Final|Native|Private|BlueprintCallable // @ game+0xdb41c0
	//void DropFromWall(); // Function Ghostrunner.PlayerCharacter.DropFromWall // Final|Native|Private|BlueprintCallable // @ game+0xdb41a0
	//void DoWallJump(); // Function Ghostrunner.PlayerCharacter.DoWallJump // Final|Native|Private|BlueprintCallable // @ game+0xdb4100
	//void DoSuperJump(); // Function Ghostrunner.PlayerCharacter.DoSuperJump // Final|Native|Private|BlueprintCallable // @ game+0xdb40e0
	//void DoSecondJump(); // Function Ghostrunner.PlayerCharacter.DoSecondJump // Final|Native|Private|BlueprintCallable // @ game+0xdb40c0
	//void DoKunaiJump(); // Function Ghostrunner.PlayerCharacter.DoKunaiJump // Final|Native|Public|BlueprintCallable // @ game+0xdb40a0
	//void DoGrindingJump(); // Function Ghostrunner.PlayerCharacter.DoGrindingJump // Final|Native|Private|BlueprintCallable // @ game+0xdb4080
	//void DoGraplingJump(); // Function Ghostrunner.PlayerCharacter.DoGraplingJump // Native|Event|Protected|BlueprintEvent // @ game+0xdb4060
	//void DoFirstJump(); // Function Ghostrunner.PlayerCharacter.DoFirstJump // Final|Native|Private|BlueprintCallable // @ game+0xdb4040
	//void DebugTick(float DeltaTime); // Function Ghostrunner.PlayerCharacter.DebugTick // Final|Native|Public // @ game+0xdb3fc0
	//void DebugLogOnScreen(struct FString Log); // Function Ghostrunner.PlayerCharacter.DebugLogOnScreen // Final|Native|Public|BlueprintCallable // @ game+0xdb3ee0
	//void DashSlowmotionUpdate(float Val); // Function Ghostrunner.PlayerCharacter.DashSlowmotionUpdate // Final|Native|Private // @ game+0xdb3e60
	//void DashSlowmotionFinished(); // Function Ghostrunner.PlayerCharacter.DashSlowmotionFinished // Final|Native|Private // @ game+0xdb3e40
	//void DashSetFieldOfView(float Val); // Function Ghostrunner.PlayerCharacter.DashSetFieldOfView // Final|Native|Private // @ game+0xdb3dc0
	//void DashOnFloorStart(); // Function Ghostrunner.PlayerCharacter.DashOnFloorStart // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0xdb3da0
	//void DashInTheAirStart(); // Function Ghostrunner.PlayerCharacter.DashInTheAirStart // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0xdb3d80
	//void DashInTheAirEndRefactor(); // Function Ghostrunner.PlayerCharacter.DashInTheAirEndRefactor // Final|Native|Public|BlueprintCallable // @ game+0xdb3d60
	//void DashEndSetFieldOfView(float Val); // Function Ghostrunner.PlayerCharacter.DashEndSetFieldOfView // Final|Native|Private // @ game+0xdb3ce0
	//struct FVector DashEndPoint(); // Function Ghostrunner.PlayerCharacter.DashEndPoint // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xdb3ca0
	//void DashChargeUsedContinue(int32_t DashTime, int32_t DashNumber); // Function Ghostrunner.PlayerCharacter.DashChargeUsedContinue // Final|Native|Public // @ game+0xdb3be0
	//void DashChargeUsed(int32_t DashTime, int32_t DashNumber); // Function Ghostrunner.PlayerCharacter.DashChargeUsed // Final|Native|Public|BlueprintCallable // @ game+0xdb3b20
	//void DamagePlayer(struct AActor* PlayerKiller_); // Function Ghostrunner.PlayerCharacter.DamagePlayer // Final|Native|Private|BlueprintCallable // @ game+0xdb3aa0
	//void CrouchStart(); // Function Ghostrunner.PlayerCharacter.CrouchStart // Event|Protected|BlueprintCallable|BlueprintEvent // @ game+0x10f6c80
	//void CrouchEnd(); // Function Ghostrunner.PlayerCharacter.CrouchEnd // Event|Protected|BlueprintCallable|BlueprintEvent // @ game+0x10f6c80
	//void CorrectCameraRotationWallrunBP(bool WallOnRight); // Function Ghostrunner.PlayerCharacter.CorrectCameraRotationWallrunBP // Final|Native|Private|BlueprintCallable // @ game+0xdb3a10
	//void CollisionEnable(bool Enabled); // Function Ghostrunner.PlayerCharacter.CollisionEnable // Final|Native|Public // @ game+0xdb3980
	//void ClimbWall(); // Function Ghostrunner.PlayerCharacter.ClimbWall // Native|Event|Protected|BlueprintCallable|BlueprintEvent // @ game+0xaac880
	//void Climbing(); // Function Ghostrunner.PlayerCharacter.Climbing // Final|Native|Private|BlueprintCallable // @ game+0xdb3960
	//void ClimbEdgeLow(); // Function Ghostrunner.PlayerCharacter.ClimbEdgeLow // Native|Event|Protected|BlueprintCallable|BlueprintEvent // @ game+0xdb3940
	//void ClimbEdgeHigh(); // Function Ghostrunner.PlayerCharacter.ClimbEdgeHigh // Native|Event|Protected|BlueprintCallable|BlueprintEvent // @ game+0xdb3920
	//void CheckWhichSideIsWallBP(bool WallOnRight); // Function Ghostrunner.PlayerCharacter.CheckWhichSideIsWallBP // Final|Native|Private|BlueprintCallable // @ game+0xdb3890
	//bool CheckWallWhenMeleeAttack(struct FHitResult Hit); // Function Ghostrunner.PlayerCharacter.CheckWallWhenMeleeAttack // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0xdb37b0
	//struct FHitResult CheckRaycastHit(struct FVector vectorDirection, float Distance, struct FColor InColor); // Function Ghostrunner.PlayerCharacter.CheckRaycastHit // Final|Native|Private|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0xdb3620
	//bool CheckIfObjectIsInRangeMeleeAttack(struct AActor* OtherActor); // Function Ghostrunner.PlayerCharacter.CheckIfObjectIsInRangeMeleeAttack // Final|Native|Public // @ game+0xdb3590
	//void CheckIfCeilHittedWallrunLate(); // Function Ghostrunner.PlayerCharacter.CheckIfCeilHittedWallrunLate // Final|Native|Private // @ game+0xdb3570
	//void CheckIfCeilHittedWallrun(); // Function Ghostrunner.PlayerCharacter.CheckIfCeilHittedWallrun // Final|Native|Private|BlueprintCallable // @ game+0xdb3550
	//void ChangeTimelinesPlayRate(float InPlayRate); // Function Ghostrunner.PlayerCharacter.ChangeTimelinesPlayRate // Final|Native|Protected|BlueprintCallable // @ game+0xdb34d0
	//void ChangeTimeDilationExceptPlayer(float timeDilation); // Function Ghostrunner.PlayerCharacter.ChangeTimeDilationExceptPlayer // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0xd5e8b0
	//void ChangeSnappingAndInputState(bool IsSnapping); // Function Ghostrunner.PlayerCharacter.ChangeSnappingAndInputState // Final|Native|Protected|BlueprintCallable // @ game+0xdb3440
	//void ChangeSkillComponent(struct UBaseSkill* NewSkill); // Function Ghostrunner.PlayerCharacter.ChangeSkillComponent // Final|Native|Public|BlueprintCallable // @ game+0xdb33c0
	//void ChangeSkill(struct TScriptInterface<None> NewSkill); // Function Ghostrunner.PlayerCharacter.ChangeSkill // Final|Native|Public|BlueprintCallable // @ game+0xdb3320
	//void ChangeFieldOfViev(float ValueToAdd, struct FString ID, bool Increase); // Function Ghostrunner.PlayerCharacter.ChangeFieldOfViev // Final|Native|Public|BlueprintCallable // @ game+0xdb31b0
	//void ChangeEnemyDepth(struct AEnemyBaseCharacter* Enemy, bool RenderDepth); // Function Ghostrunner.PlayerCharacter.ChangeEnemyDepth // Final|Native|Public|BlueprintCallable // @ game+0xdb30e0
	//bool CanUncrouch(); // Function Ghostrunner.PlayerCharacter.CanUncrouch // Final|Native|Private|BlueprintCallable // @ game+0xdb30b0
	//bool CanStartWallrunning(); // Function Ghostrunner.PlayerCharacter.CanStartWallrunning // Final|Native|Private|BlueprintCallable|BlueprintPure|Const // @ game+0xdb3080
	//bool CanKeepWallrunning(); // Function Ghostrunner.PlayerCharacter.CanKeepWallrunning // Final|Native|Private|BlueprintCallable|BlueprintPure|Const // @ game+0xdb3050
	//enum class EInteractivePointState CanHackPoint(struct FVector PointLocation, float MaxHackingDistanceHideSqr, float MaxHackingDistanceInactiveSqr, float DistanceToPlayerSqr); // Function Ghostrunner.PlayerCharacter.CanHackPoint // Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable // @ game+0xdb2ec0
	//enum class EInteractivePointState CanGrapplingToPoint(struct FVector PointLocation, float MaxGrapplingDistanceHideSqr, float MaxGrapplingDistanceInactiveSqr, float DistanceToPlayerSqr); // Function Ghostrunner.PlayerCharacter.CanGrapplingToPoint // Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0xdb2d30
	//void CameraShakeOnLanding(); // Function Ghostrunner.PlayerCharacter.CameraShakeOnLanding // Final|Native|Private|BlueprintCallable // @ game+0xdb2d10
	//void CameraAimAssistTimelineUpdate(float DeltaTime); // Function Ghostrunner.PlayerCharacter.CameraAimAssistTimelineUpdate // Final|Native|Protected // @ game+0xdb2c90
	//void CameraAimAssist(struct TArray<struct AActor*> AssistEnemiesArray); // Function Ghostrunner.PlayerCharacter.CameraAimAssist // Final|Native|Protected|BlueprintCallable // @ game+0xdb2bb0
	//void CallForwardAcceleration(); // Function Ghostrunner.PlayerCharacter.CallForwardAcceleration // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0xd5f080
	//struct FVector CalculateSnapEndpoint(struct AActor* enemyToSnap); // Function Ghostrunner.PlayerCharacter.CalculateSnapEndpoint // Final|Native|Private|HasDefaults // @ game+0xdb2b10
	//struct FVector CalculatePlayerVelocity(); // Function Ghostrunner.PlayerCharacter.CalculatePlayerVelocity // Final|Native|Private|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0xdb2ad0
	//void CalculateFallingSpeedOnWallrun(); // Function Ghostrunner.PlayerCharacter.CalculateFallingSpeedOnWallrun // Final|Native|Private|BlueprintCallable // @ game+0xdb2ab0
	//float CalculateDistanceBetweenActors(struct AActor* actor1, struct AActor* actor2); // Function Ghostrunner.PlayerCharacter.CalculateDistanceBetweenActors // Final|Native|Private|BlueprintCallable // @ game+0xdb29f0
	//void BreakMeleeAttackByWall(); // Function Ghostrunner.PlayerCharacter.BreakMeleeAttackByWall // Final|Native|Public|BlueprintCallable // @ game+0x8c27f0
	//void AirDashRightSetRotation(float Val); // Function Ghostrunner.PlayerCharacter.AirDashRightSetRotation // Final|Native|Private // @ game+0xdb2970
	//void AirDashLeftSetRotation(float Val); // Function Ghostrunner.PlayerCharacter.AirDashLeftSetRotation // Final|Native|Private // @ game+0xdb28f0
	//void AddSpeedOnCrouchRelease(); // Function Ghostrunner.PlayerCharacter.AddSpeedOnCrouchRelease // Native|Event|Protected|BlueprintCallable|BlueprintEvent // @ game+0xdb2850
	//void AddForceBack(float Force, float ZForce, struct FVector LaunchDirection); // Function Ghostrunner.PlayerCharacter.AddForceBack // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xdb2670
	//void AddForce(struct FVector Direction, float Force); // Function Ghostrunner.PlayerCharacter.AddForce // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xdb25a0
	*/
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
