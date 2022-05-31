#pragma once

#ifdef SX_PLATFORM_WINDOWS
	#ifdef SX_BUILD_DLL
		#define SIER0X_API __declspec(dllexport)	
	#else
		#define SIER0X_API __declspec(dllimport)
	#endif
#else
	#error Sier0x only supports Windows! 
#endif // SX_PLATFORM_WINDOWS
