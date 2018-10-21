#include <iostream>

class Log
{
public:
  const int LogLevelError = 0;
  const int LogLevelWarning = 1;
  const int LogLevelInfo = 2;

private:
  int m_LogLevel = LogLevelInfo;

public:
  void SetLevel(int level)
  {
    m_LogLevel = level;
  }
  void Error(const char *message)
  {
    std::cout << "[ERROR]: " << message << std::endl;
  }
  void Warn(const char *message)
  {
    std::cout << "[WARNDING]: " << message << std::endl;
  }
  void Info(const char *message)
  {
    std::cout << "[INFO]: " << message << std::endl;
  }
  Log(/* args */);
  ~Log();
};

Log::Log(/* args */)
{
}

Log::~Log()
{
}

int main()
{
  Log log;

  log.SetLevel(LogLevelWarning);
  log.Warn("Hello!");

  return 0;
}
