#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Cardboard
struct Cardboard_t7_20;
// UnityEngine.Camera
struct Camera_t5_93;
// StereoController
struct StereoController_t7_21;
// BaseVRDevice
struct BaseVRDevice_t7_22;
// UnityEngine.RenderTexture
struct RenderTexture_t5_45;
// System.Uri
struct Uri_t3_22;
// Cardboard/StereoScreenChangeDelegate
struct StereoScreenChangeDelegate_t7_19;
// System.Action
struct Action_t2_11;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_Cardboard_DistortionCorrectionMethod.h"
#include "AssemblyU2DCSharp_Cardboard_BackButtonModes.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// Cardboard
struct  Cardboard_t7_20  : public MonoBehaviour_t5_100
{
	// System.Boolean Cardboard::uiLayerEnabled
	bool ___uiLayerEnabled_6;
	// System.Boolean Cardboard::vrModeEnabled
	bool ___vrModeEnabled_7;
	// Cardboard/DistortionCorrectionMethod Cardboard::distortionCorrection
	int32_t ___distortionCorrection_8;
	// System.Boolean Cardboard::enableAlignmentMarker
	bool ___enableAlignmentMarker_9;
	// System.Boolean Cardboard::enableSettingsButton
	bool ___enableSettingsButton_10;
	// Cardboard/BackButtonModes Cardboard::backButtonMode
	int32_t ___backButtonMode_11;
	// System.Boolean Cardboard::tapIsTrigger
	bool ___tapIsTrigger_12;
	// System.Single Cardboard::neckModelScale
	float ___neckModelScale_13;
	// System.Boolean Cardboard::autoDriftCorrection
	bool ___autoDriftCorrection_14;
	// System.Boolean Cardboard::electronicDisplayStabilization
	bool ___electronicDisplayStabilization_15;
	// System.Boolean Cardboard::syncWithCardboardApp
	bool ___syncWithCardboardApp_16;
	// System.Single Cardboard::stereoScreenScale
	float ___stereoScreenScale_18;
	// UnityEngine.Vector2 Cardboard::defaultComfortableViewingRange
	Vector2_t5_55  ___defaultComfortableViewingRange_20;
	// System.Uri Cardboard::DefaultDeviceProfile
	Uri_t3_22 * ___DefaultDeviceProfile_21;
	// System.Int32 Cardboard::updatedToFrame
	int32_t ___updatedToFrame_22;
	// Cardboard/StereoScreenChangeDelegate Cardboard::OnStereoScreenChanged
	StereoScreenChangeDelegate_t7_19 * ___OnStereoScreenChanged_23;
	// System.Action Cardboard::OnTrigger
	Action_t2_11 * ___OnTrigger_24;
	// System.Action Cardboard::OnTilt
	Action_t2_11 * ___OnTilt_25;
	// System.Action Cardboard::OnProfileChange
	Action_t2_11 * ___OnProfileChange_26;
	// System.Action Cardboard::OnBackButton
	Action_t2_11 * ___OnBackButton_27;
	// System.Boolean Cardboard::<NativeDistortionCorrectionSupported>k__BackingField
	bool ___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_28;
	// System.Boolean Cardboard::<NativeUILayerSupported>k__BackingField
	bool ___U3CNativeUILayerSupportedU3Ek__BackingField_29;
	// System.Boolean Cardboard::<Triggered>k__BackingField
	bool ___U3CTriggeredU3Ek__BackingField_30;
	// System.Boolean Cardboard::<Tilted>k__BackingField
	bool ___U3CTiltedU3Ek__BackingField_31;
	// System.Boolean Cardboard::<ProfileChanged>k__BackingField
	bool ___U3CProfileChangedU3Ek__BackingField_32;
	// System.Boolean Cardboard::<BackButtonPressed>k__BackingField
	bool ___U3CBackButtonPressedU3Ek__BackingField_33;
};
struct Cardboard_t7_20_StaticFields{
	// Cardboard Cardboard::sdk
	Cardboard_t7_20 * ___sdk_3;
	// UnityEngine.Camera Cardboard::currentMainCamera
	Camera_t5_93 * ___currentMainCamera_4;
	// StereoController Cardboard::currentController
	StereoController_t7_21 * ___currentController_5;
	// BaseVRDevice Cardboard::device
	BaseVRDevice_t7_22 * ___device_17;
	// UnityEngine.RenderTexture Cardboard::stereoScreen
	RenderTexture_t5_45 * ___stereoScreen_19;
};
