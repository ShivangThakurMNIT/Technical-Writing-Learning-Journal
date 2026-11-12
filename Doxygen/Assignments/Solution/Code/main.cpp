/**
 * @mainpage Calculation Engine
 * @brief A small multi-file C++ project documented with Doxygen.
 * @details This project contains a Logger and a CalculationEngine.
 * The calculation engine uses the logger to report successful operations
 * and errors.
 *
 * Build and run the demonstration:
 * @code
 * g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o calculation_demo
 * ./calculation_demo
 * @endcode
 */

/**
 * @file main.cpp
 * @brief Contains the application entry point.
 */

#include "CalculationEngine.h"
#include <iostream>

/**
 * @brief Runs a demonstration power calculation.
 * @return 0 when the demonstration completes successfully.
 */
int main() {
    Logger logger(Logger::LogLevel::Debug);
    CalculationEngine engine(logger);

    std::cout << "2^5 = " << engine.power(2.0, 5) << '\n';

    return 0;
}
