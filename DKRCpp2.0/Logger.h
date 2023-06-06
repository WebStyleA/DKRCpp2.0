#pragma once
#include <string>
#include <fstream>

class Logger {
private:
    std::ofstream fileStream;
    int shift;
    std::string encrypt(const std::string& message);
public:
    Logger(const std::string& filename, int shift);
    ~Logger();

    void log(const std::string& message);
};