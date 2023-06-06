#include "Logger.h"

Logger::Logger(const std::string& filename, int shift) : shift(shift) {
    fileStream.open(filename, std::ios::app);
}

Logger::~Logger() {
    if (fileStream.is_open()) {
        fileStream.close();
    }
}

void Logger::log(const std::string& message) {
    if (fileStream.is_open()) {
        fileStream << encrypt(message) << std::endl;
    }
}

std::string Logger::encrypt(const std::string& message) {
    std::string result = message;
    for (char& c : result) {
        if ('a' <= c && c <= 'z') {
            c = 'a' + (c - 'a' + shift) % 26;
        }
        else if ('A' <= c && c <= 'Z') {
            c = 'A' + (c - 'A' + shift) % 26;
        }
    }
    return result;
}