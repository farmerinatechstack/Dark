#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// MutablePose3D
struct MutablePose3D_t7_9;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Void MutablePose3D::.ctor()
extern "C" void MutablePose3D__ctor_m7_298 (MutablePose3D_t7_9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MutablePose3D::Set(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" void MutablePose3D_Set_m7_299 (MutablePose3D_t7_9 * __this, Vector3_t5_56  ___position, Quaternion_t5_57  ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MutablePose3D::Set(UnityEngine.Matrix4x4)
extern "C" void MutablePose3D_Set_m7_300 (MutablePose3D_t7_9 * __this, Matrix4x4_t5_58  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MutablePose3D::SetRightHanded(UnityEngine.Matrix4x4)
extern "C" void MutablePose3D_SetRightHanded_m7_301 (MutablePose3D_t7_9 * __this, Matrix4x4_t5_58  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
