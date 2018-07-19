#ifndef TO_BINARY_H
#define TO_BINARY_H
#include <bitset>

typedef std::bitset<8> byte;

namespace FAST{
  namespace to_binary{
    class ToBinary{
    protected:
      byte* output;
    public:
      ToBinary(char* assembler);
      ~ToBinary();

      byte* get_output();
    };
  }
}

#endif
