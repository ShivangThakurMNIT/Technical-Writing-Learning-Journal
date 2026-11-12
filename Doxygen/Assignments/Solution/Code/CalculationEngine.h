/**
 * @file CalculationEngine.h
 * @brief Declares a calculation engine that performs mathematical operations.
 */

#ifndef CALCULATION_ENGINE_H
#define CALCULATION_ENGINE_H

#include "Logger.h"
#include <stdexcept>

/**
 * @class CalculationEngine
 * @brief Performs mathematical calculations and reports their outcomes.
 * @details The calculation engine uses a Logger instance to report successful
 * operations and errors. The logger is supplied when the engine is created.
 */
class CalculationEngine {
public:
    /**
     * @brief Creates a calculation engine.
     * @param logger Logger used to report calculation messages.
     */
    explicit CalculationEngine(const Logger& logger)
        : logger_(logger) {}

    /**
     * @brief Calculates a base raised to an integer exponent.
     * @param base Number to be raised to the specified exponent.
     * @param exponent Power to which the base is raised.
     * @return The value of base raised to exponent.
     * @throws std::invalid_argument If base is zero and exponent is negative.
     * @todo Add explicit handling for the minimum integer exponent to avoid
     * overflow when converting a negative exponent to a positive count.
     */
    double power(double base, int exponent) const {
        if (base == 0.0 && exponent < 0) {
            logger_.log(Logger::LogLevel::Error,
                        "Zero cannot be raised to a negative exponent.");
            throw std::invalid_argument("zero to a negative exponent");
        }

        double result = 1.0;
        int count = exponent < 0 ? -exponent : exponent;

        for (int i = 0; i < count; ++i) {
            result *= base;
        }

        if (exponent < 0) {
            result = 1.0 / result;
        }

        logger_.log(Logger::LogLevel::Info, "Power calculation completed.");
        return result;
    }

private:
    const Logger& logger_;
};

#endif
