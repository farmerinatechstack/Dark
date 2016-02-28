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

// UnityEngine.NetworkView
struct NetworkView_t5_69;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_NetworkMessageInfo.h"
#include "UnityEngine_UnityEngine_NetworkPlayer.h"

// System.Double UnityEngine.NetworkMessageInfo::get_timestamp()
extern "C" double NetworkMessageInfo_get_timestamp_m5_562 (NetworkMessageInfo_t5_73 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkPlayer UnityEngine.NetworkMessageInfo::get_sender()
extern "C" NetworkPlayer_t5_67  NetworkMessageInfo_get_sender_m5_563 (NetworkMessageInfo_t5_73 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkView UnityEngine.NetworkMessageInfo::get_networkView()
extern "C" NetworkView_t5_69 * NetworkMessageInfo_get_networkView_m5_564 (NetworkMessageInfo_t5_73 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkView UnityEngine.NetworkMessageInfo::NullNetworkView()
extern "C" NetworkView_t5_69 * NetworkMessageInfo_NullNetworkView_m5_565 (NetworkMessageInfo_t5_73 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
