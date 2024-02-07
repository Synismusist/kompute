#pragma once

#include <iostream>

#define KOMPUTE_LOG_LEVEL_TRACE 0
#define KOMPUTE_LOG_LEVEL_DEBUG 1
#define KOMPUTE_LOG_LEVEL_INFO 2
#define KOMPUTE_LOG_LEVEL_WARN 3
#define KOMPUTE_LOG_LEVEL_ERROR 4
#define KOMPUTE_LOG_LEVEL_CRITICAL 5
#define KOMPUTE_LOG_LEVEL_OFF 6


#ifndef KOMPUTE_DISABLE_VK_DEBUG_LAYERS
	#define KP_LOG_TRACE(...) //std::cout << std::format(__VA_ARGS__).c_str() << std::endl; 
	#define KP_LOG_DEBUG(...) //std::cout << std::format(__VA_ARGS__).c_str() << std::endl; 
	#define KP_LOG_INFO(...)  //std::cout << std::format(__VA_ARGS__).c_str() << std::endl; 
	#define KP_LOG_WARN(...)  //std::cout << std::format(__VA_ARGS__).c_str() << std::endl;
	#define KP_LOG_ERROR(...) //std::cout << std::format(__VA_ARGS__).c_str() << std::endl;
#else
	#define KP_LOG_TRACE(...)
	#define KP_LOG_DEBUG(...)
	#define KP_LOG_INFO(...)
	#define KP_LOG_WARN(...)
	#define KP_LOG_ERROR(...)
#endif