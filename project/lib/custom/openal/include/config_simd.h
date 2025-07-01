#if defined(HX_MACOS) && defined(HXCPP_ARM64)

#include "simd/config_simd-macos-arm64.h"

#elif defined(HX_MACOS)

#include "simd/config_simd-macos-x86_64.h"

#elif defined(IPHONE)

#include "simd/config_simd-ios-x86_64.h"

#elif defined(HX_WINDOWS)

#ifdef HXCPP_M64
#include "simd/config_simd-windows-x86_64.h"
#elif defined(HXCPP_ARM64)
#include "simd/config_simd-windows-arm64.h"
#else
#include "simd/config_simd-windows-x86.h"
#endif

#elif defined(HX_LINUX)

#include "simd/config_simd-linux.h"

#elif defined (HX_ANDROID)

#include "simd/config_simd-android.h"

#endif
