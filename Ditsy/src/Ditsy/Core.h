#pragma once

#ifdef DS_PLATFORM_WINDOWS
	#ifdef DS_BUILD_DLL
		#define DITSY_API __declspec(dllexport)
	#else
		#define DITSY_API __declspec(dllimport)
	#endif
#else
	#error Ditsy only supports Windows!
#endif