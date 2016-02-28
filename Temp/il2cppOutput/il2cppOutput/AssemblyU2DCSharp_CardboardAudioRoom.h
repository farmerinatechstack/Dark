#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CardboardAudioRoom/SurfaceMaterial[]
struct SurfaceMaterialU5BU5D_t7_13;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_CardboardAudioRoom_SurfaceMaterial.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// CardboardAudioRoom
struct  CardboardAudioRoom_t7_12  : public MonoBehaviour_t5_100
{
	// CardboardAudioRoom/SurfaceMaterial CardboardAudioRoom::leftWall
	int32_t ___leftWall_2;
	// CardboardAudioRoom/SurfaceMaterial CardboardAudioRoom::rightWall
	int32_t ___rightWall_3;
	// CardboardAudioRoom/SurfaceMaterial CardboardAudioRoom::floor
	int32_t ___floor_4;
	// CardboardAudioRoom/SurfaceMaterial CardboardAudioRoom::ceiling
	int32_t ___ceiling_5;
	// CardboardAudioRoom/SurfaceMaterial CardboardAudioRoom::backWall
	int32_t ___backWall_6;
	// CardboardAudioRoom/SurfaceMaterial CardboardAudioRoom::frontWall
	int32_t ___frontWall_7;
	// System.Single CardboardAudioRoom::reflectivity
	float ___reflectivity_8;
	// System.Single CardboardAudioRoom::reverbGainDb
	float ___reverbGainDb_9;
	// System.Single CardboardAudioRoom::reverbBrightness
	float ___reverbBrightness_10;
	// System.Single CardboardAudioRoom::reverbTime
	float ___reverbTime_11;
	// UnityEngine.Vector3 CardboardAudioRoom::size
	Vector3_t5_56  ___size_12;
	// System.Int32 CardboardAudioRoom::id
	int32_t ___id_13;
	// CardboardAudioRoom/SurfaceMaterial[] CardboardAudioRoom::surfaceMaterials
	SurfaceMaterialU5BU5D_t7_13* ___surfaceMaterials_14;
};
