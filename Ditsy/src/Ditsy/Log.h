#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Ditsy {

	class DITSY_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Core log macros
#define DS_CORE_TRACE(...)     ::Ditsy::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define DS_CORE_INFO(...)      ::Ditsy::Log::GetCoreLogger()->info(__VA_ARGS__)
#define DS_CORE_WARN(...)      ::Ditsy::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define DS_CORE_ERROR(...)     ::Ditsy::Log::GetCoreLogger()->error(__VA_ARGS__)
#define DS_CORE_FATAL(...)     ::Ditsy::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define DS_TRACE(...)          ::Ditsy::Log::GetClientLogger()->trace(__VA_ARGS__)
#define DS_INFO(...)           ::Ditsy::Log::GetClientLogger()->info(__VA_ARGS__)
#define DS_WARN(...)           ::Ditsy::Log::GetClientLogger()->warn(__VA_ARGS__)
#define DS_ERROR(...)          ::Ditsy::Log::GetClientLogger()->error(__VA_ARGS__)
#define DS_FATAL(...)          ::Ditsy::Log::GetClientLogger()->fatal(__VA_ARGS__)