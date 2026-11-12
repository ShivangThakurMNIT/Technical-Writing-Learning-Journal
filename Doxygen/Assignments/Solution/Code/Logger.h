/**
 * @file Logger.h
 * @brief Declares a severity-based console logging utility.
 */

#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <string>

/**
 * @class Logger
 * @brief Writes application messages to the console.
 *
 * Logger filters messages according to a configured minimum severity.
 * Only messages whose severity is equal to or greater than the configured
 * minimum level are printed.
 */
class Logger {
public:
    /**
     * @enum LogLevel
     * @brief Severity levels supported by the logger.
     */
    enum class LogLevel {
        Debug,   /**< Detailed diagnostic information useful during development. */
        Info,    /**< General information about normal application operation. */
        Warning, /**< A condition that may require attention. */
        Error    /**< A failure that prevents an operation from completing normally. */
    };

    /**
     * @brief Constructs a logger with a minimum severity level.
     * @param minimumLevel Lowest severity level that will be printed.
     */
    explicit Logger(LogLevel minimumLevel = LogLevel::Info)
        : minimumLevel_(minimumLevel) {}

    /**
     * @brief Prints a message if its severity meets the configured threshold.
     * @param level Severity level of the message.
     * @param message Text of the message to print.
     */
    void log(LogLevel level, const std::string& message) const {
        if (static_cast<int>(level) >= static_cast<int>(minimumLevel_)) {
            std::cout << "[" << levelName(level) << "] " << message << '\n';
        }
    }

private:
    LogLevel minimumLevel_;

    /**
     * @brief Converts a severity level to its printable name.
     * @param level Severity level to convert.
     * @return A constant string containing the severity name.
     */
    static const char* levelName(LogLevel level) {
        switch (level) {
            case LogLevel::Debug: return "DEBUG";
            case LogLevel::Info: return "INFO";
            case LogLevel::Warning: return "WARNING";
            case LogLevel::Error: return "ERROR";
        }
        return "UNKNOWN";
    }
};

#endif
