#pragma once

#ifdef DS_PLATFORM_WINDOWS
	#ifdef DS_BUILD_DLL
		#define DAISY_API __declspec(dllexport)
	#else
		#define DAISY_API __declspec(dllimport)
	#endif
#else
	#error Daisy only supports Windows!
#endif