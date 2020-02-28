#pragma once

#ifdef MARA_PLATFORM_WINDOWS
	#ifdef MARA_BUILD_DLL
		#define MARA2D_API __declspec(dllexport)
	#else
		#define MARA2D_API __declspec(dllimport)
	#endif
#endif // MARA_PLATFORM_WINDOWS
