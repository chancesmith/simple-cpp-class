

class Log
{
private:
  /* data */
public:
  SetLevel(int level)
  {
  }
  Warn(const char *message)
  {
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
  log.warn("Hello!");

  return 0;
}
