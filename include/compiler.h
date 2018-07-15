#ifndef COMPILER_H
#define COMPILER_H
#include <fstream>

namespace FAST{
  namespace compiler{
    class Compiler{
    protected:
      char* file;
      char* data;
      char* operation;
      char* output;
    public:
      Compiler(char* file_path, char* mode);
      void set_output_file(char* output_file);
      int compile();
      int run();
      int exe();
    };
  }
}
#endif
