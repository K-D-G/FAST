#ifndef COMPILER_H
#define COMPILER_H
#include <fstream>
#include <stdlib.h>
#include <stdio.h>

#include <to_assembler.h>
#include <to_binary.h>

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
      void write_data();
      int run();
      int exe(bool cache=false);
    };
  }
}
#endif
