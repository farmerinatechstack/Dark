#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType.h"
#include "AssemblyU2DCSharp_CardboardProfile_Lenses.h"
#include "AssemblyU2DCSharp_CardboardProfile_MaxFOV.h"
#include "AssemblyU2DCSharp_CardboardProfile_Distortion.h"

// CardboardProfile/Device
struct  Device_t7_33 
{
	// CardboardProfile/Lenses CardboardProfile/Device::lenses
	Lenses_t7_30  ___lenses_0;
	// CardboardProfile/MaxFOV CardboardProfile/Device::maxFOV
	MaxFOV_t7_31  ___maxFOV_1;
	// CardboardProfile/Distortion CardboardProfile/Device::distortion
	Distortion_t7_32  ___distortion_2;
	// CardboardProfile/Distortion CardboardProfile/Device::inverse
	Distortion_t7_32  ___inverse_3;
};
