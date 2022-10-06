/*
 * @Author: Frank Chu
 * @Date: 2022-09-16 11:56:31
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-16 12:05:45
 * @FilePath: /Cpp/the-cherno/20-how-to-write-cpp-class.cpp
 * @Description: https://www.youtube.com/playlist?list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb p20
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <iostream>

class Log {
    public:
        const int LogLevelError = 0;
        const int LogLevelWarning = 1;
        const int LogLevelInfo = 2;
    
    private:
        int m_LogLevel;
        
    public:
        void SetLevel(int level) {
            m_LogLevel = level;
        }

        void Warn(const char* message) {
            if (m_LogLevel >= LogLevelWarning)
                std::cout << "[Warning]: " << message << std::endl;
        }

        void Info(const char* message) {
            if (m_LogLevel >= LogLevelInfo)
                std::cout << "[Info]: " << message << std::endl;
        }

        void Error(const char* message) {
            if (m_LogLevel >= LogLevelError)
                std::cout << "[Error]: " << message << std::endl;
        }
};

int main() {
    Log log;
    log.SetLevel(log.LogLevelWarning);
    log.Warn("hello");
    log.Error("hello!");
    log.Info("hello");
    std::cin.get();
}