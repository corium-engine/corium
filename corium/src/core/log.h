#pragma once

#include <spdlog/spdlog.h>

#define CR_LOG_TRACE(...) spdlog::info(__VA_ARGS__)
#define CR_LOG_WARNING(...) spdlog::warn(__VA_ARGS__)
#define CR_LOG_ERROR(...) spdlog::error(__VA_ARGS__)
#define CR_LOG_CRITICAL(...) spdlog::critical(__VA_ARGS__)
#define CR_LOG_DEBUG(...) spdlog::debug(__VA_ARGS__)