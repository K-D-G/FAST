#ifndef TO_BINARY_H
#define TO_BINARY_H
#include <bitset>
#include <map>
#include <string>

typedef std::bitset<8> byte;

namespace FAST{
  namespace to_binary{
    class ToBinary{
    protected:
      byte* output;
      std::map<std::string, byte>assembler_commands;

    public:
      ToBinary(std::string assembler);
      ~ToBinary();

      void _compile(std::string assembler);
      void _deal_with_command(std::string command);
      byte* get_output();
    };
  }
}

#endif
