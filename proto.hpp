#pragma once
#include <cstdint>

enum class PidVariableType : uint8_t {
    Proportional = 0,
    Integral = 1,
    Derivative = 2,
    WindUp = 3
};

enum class WorkMode : uint8_t {
    Stopped = 0,
    CurrentSource = 1,
    TemperatureStab = 2,
    Debug = 3
};

/// @brief Подкоманды ограничений
enum class Limits : uint8_t {
    VoltageLow = 0, ///< Ограничение выходного напряжения в отрицательной области, [В]
    VoltageHigh,    ///< Ограничение выходного напряжения в положительной области, [В]
    CurrentLow,     ///< Ограничение выходного тока в отрицательной области, [А]
    CurrentHigh,    ///< Ограничение выходного тока в положительной области, [А]
};


/// @brief Статусы
enum class Status : uint32_t {

};
