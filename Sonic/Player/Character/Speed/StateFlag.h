﻿#pragma once

#include <Hedgehog/Base/Container/hhVector.h>
#include <Sonic/Player/Character/Speed/PlayerSpeedContext.h>

namespace Sonic::Player
{
    enum CPlayerSpeedContext::EStateFlag
    {
        eStateFlag_EarthGround,
        eStateFlag_HeadToVelocity,
        eStateFlag_HeadUpOnly,
        eStateFlag_SlowHeadToUpDirection,
        eStateFlag_OutOfControl,
        eStateFlag_NoLandOutOfControl,
        eStateFlag_DisableForwardPathInterpolation,
        eStateFlag_ChangePath,
        eStateFlag_ChangePathCameraChange,
        eStateFlag_WallWalkJump,
        eStateFlag_SupportWalkOnCeiling,
        eStateFlag_NotifyWalkOnCeiling,
        eStateFlag_AlwaysDownForce,
        eStateFlag_DisableDownForce,
        eStateFlag_Dead,
        eStateFlag_Goal,
        eStateFlag_Boost,
        eStateFlag_FloatingBoost,
        eStateFlag_StartingBoost,
        eStateFlag_EndBoost,
        eStateFlag_DummyBoost,
        eStateFlag_EndDummyBoost,
        eStateFlag_Homing,
        eStateFlag_EnableHomingAttack,
        eStateFlag_EnableHomingAttackOnDiving,
        eStateFlag_EnableHomingAttackOutOfControl,
        eStateFlag_DisableAirBoost,
        eStateFlag_EnableAirOnceAction,
        eStateFlag_DisableStomping,
        eStateFlag_ForceShoesSliding,
        eStateFlag_DisableShoesSliding,
        eStateFlag_OnWater,
        eStateFlag_OnNoDeadWater,
        eStateFlag_OnAboveWater,
        eStateFlag_OnSurfaceWater,
        eStateFlag_OnShallowWater,
        eStateFlag_OnWaterSeEnabled,
        eStateFlag_TerrainCollisionEnable,
        eStateFlag_AirOutOfControl,
        eStateFlag_NoPadStopWalk,
        eStateFlag_DisableAirAutoDec,
        eStateFlag_DisableWallJumpReady,
        eStateFlag_GroundDistanceZero,
        eStateFlag_NoPitchRollHorzOnAir,
        eStateFlag_DisableMoonsault,
        eStateFlag_KeepRunning,
        eStateFlag_KeepRunningEnableBackForce,
        eStateFlag_KeepRunningOnSpiral,
        eStateFlag_KeepRunningPause,
        eStateFlag_SShapeRunning,
        eStateFlag_MoveOnPath,
        eStateFlag_IgnoreTerrain,
        eStateFlag_UpdateYawByVelocity,
        eStateFlag_NoPitchRoll,
        eStateFlag_NoUpdateYaw,
        eStateFlag_NoUpdateYawRef,
        eStateFlag_UpdateYawOnAir,
        eStateFlag_NoUpdateAdvancedDirection,
        eStateFlag_CameraChagedPadCorrection,
        eStateFlag_EnableCameraChagedPadCorrect,
        eStateFlag_CameraToCullingBasePosEnabled,
        eStateFlag_NoDamage,
        eStateFlag_NoDead,
        eStateFlag_Damaging,
        eStateFlag_Paralyzing,
        eStateFlag_ReactinJumpPathChange,
        eStateFlag_ForcePitchRollGround,
        eStateFlag_EnableAttenuateJump,
        eStateFlag_NoGroundFall,
        eStateFlag_OnStairs,
        eStateFlag_OnBeltConveyor,
        eStateFlag_MoveToPositionAndWait,
        eStateFlag_StopPositionCount,
        eStateFlag_OnNoWallWalkGround,
        eStateFlag_ForceLandForCaught,
        eStateFlag_Restarting,
        eStateFlag_SlidingAndSquatPressOnly,
        eStateFlag_SideViewNoPathMove,
        eStateFlag_Pushing,
        eStateFlag_NoChange2DPath,
        eStateFlag_PrepreRestart,
        eStateFlag_SetDirectRotation,
        eStateFlag_IsTakingBreath,
        eStateFlag_OnSpiralGound,
        eStateFlag_OnMovableGround,
        eStateFlag_OnFakeMovableGround,
        eStateFlag_OnMoonsaltDisableGround,
        eStateFlag_EnableExceptionalBoost,
        eStateFlag_AcceptSlidingCollision,
        eStateFlag_AcceptBuoyancyForce,
        eStateFlag_AcceptEnvForce,
        eStateFlag_DisableAdlibTrick,
        eStateFlag_StandbyAdlibTrick,
        eStateFlag_StandbyChangeToSpin,
        eStateFlag_Pressing,
        eStateFlag_FallEnabledInPressing,
        eStateFlag_OnIntersectionalWay,
        eStateFlag_ObserveBoostInExternalControl,
        eStateFlag_ObserveSpinInExternalControl,
        eStateFlag_ObserveInputInExternalControl,
        eStateFlag_EscapeEnabledInExternalControl,
        eStateFlag_NoDamageInExternalControl,
        eStateFlag_Slipping,
        eStateFlag_InvokeFlameBarrier,
        eStateFlag_InvokeAquaBarrier,
        eStateFlag_InvokeThunderBarrier,
        eStateFlag_InvokeBarrier,
        eStateFlag_InvokePreciousTime,
        eStateFlag_InvokeHighSpeed,
        eStateFlag_InvokeTimeBreak,
        eStateFlag_InvokeSkateBoard,
        eStateFlag_InvokeSuperSonic,
        eStateFlag_InvokePtmRocket,
        eStateFlag_InvokePtmSpike,
        eStateFlag_InvokeUnbeaten,
        eStateFlag_DoubleJumping,
        eStateFlag_InvokeFixedMoveOn3D,
        eStateFlag_KeepStateAfterChangeDimension,
        eStateFlag_KeepPostureAfterChangeDimension,
        eStateFlag_CalibrateFrontDir,
        eStateFlag_EnableAnimationVelocityDirect,
        eStateFlag_EnableGravityControl,
        eStateFlag_EnableAirBoostOnGravityControl,
        eStateFlag_EnableChaosEnergySetting,
        eStateFlag_ChaosEnergySubstractDisabled,
        eStateFlag_EnableAutoAim,
        eStateFlag_ThroughGoalSignboard,
        eStateFlag_AutoBoost,
        eStateFlag_MaxSpeedLimited,
        eStateFlag_Pause,
        eStateFlag_SkateBoardSlowDown,
        eStateFlag_ChangeCollisionLocked,
        eStateFlag_ReadyGoOpened,
        eStateFlag_SpikeSpin,
        eStateFlag_ChangePostureInDeadAirEnabled,
        eStateFlag_DisableGroundSmoke,
        eStateFlag_Drifting,
        eStateFlag_DriftingLowSpeed,
        eStateFlag_DriftRight,
        eStateFlag_Squat,
        eStateFlag_LightSpeedDashReady,
        eStateFlag_BoostKeep,
        eStateFlag_DisableCrashWall,
        eStateFlag_WallCorrection,
        eStateFlag_Diving,
        eStateFlag_DivingFloat,
        eStateFlag_HipSliding,
        eStateFlag_GrindFullBalance,
        eStateFlag_GrindSideJump,
        eStateFlag_Freeze,
        eStateFlag_DisableBoost,
        eStateFlag_NoSquatToSliding,
        eStateFlag_IgnorePadInput,
        eStateFlag_Rising,
        eStateFlag_SpinChargeSliding,
        eStateFlag_CombinationAttacking,
        eStateFlag_SpinDash,
        eStateFlag_LightAttack,
        eStateFlag_AtomicSpin,
        eStateFlag_Binding,
        eStateFlag_ChgPlayerDisabled,
        eStateFlag_EndReflection,
        eStateFlag_CorrectOnPath,
        eStateFlag_DebugDrawGroundHitPosition,
        eStateFlag_DebugDrawVelocity,
        eStateFlag_DebugDrawPath,
        eStateFlag_DebugDrawSpikeInfo,
        eStateFlag_DebugExceptionalMove
    };

    class CPlayerSpeedContext::CStateFlag
    {
    public:
        Hedgehog::vector<uint8_t> m_Flags;
    };

    BB_ASSERT_OFFSETOF(CPlayerSpeedContext::CStateFlag, m_Flags, 0x0);
    BB_ASSERT_SIZEOF(CPlayerSpeedContext::CStateFlag, 0x10);
}