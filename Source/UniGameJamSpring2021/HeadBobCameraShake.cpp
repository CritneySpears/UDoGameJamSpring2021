// Fill out your copyright notice in the Description page of Project Settings.


#include "HeadBobCameraShake.h"

UHeadBobCameraShake::UHeadBobCameraShake()
{
	bSingleInstance = true;

	OscillationDuration = 0.1f;
	OscillationBlendInTime = 0.01f;
	OscillationBlendOutTime = 0.09f;

	RotOscillation.Pitch.Amplitude = 0.3f;
	RotOscillation.Pitch.Frequency = 20.0f;

	RotOscillation.Yaw.Amplitude = 0.5f;
	RotOscillation.Yaw.Frequency = 10.0f;

	AnimBlendInTime = 0.2f;
	AnimBlendOutTime = 0.2f;
}