#pragma once

#ifdef SPT_PLATFORM_WINDOWS
	#ifdef SPT_BUILD_DLL
		#define SPIRIT_API __declspec(dllexport)
	#else
		#define SPIRIT_API __declspec(dllimport)
	#endif	
#else
	#error Spirit is windows only!
#endif 

