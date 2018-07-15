#ifndef EXECUTOR_H
#define EXECUTOR_H
#include <iostream>
#include <fstream>
#include <compiler.h>

namespace FAST{
  namespace executor{
    class Executor{
    public:
      Executor();
      std::string get_documentation();
      int get_mode_and_execute(int argc, char* argv[]);
    };
  }
}
#endif
