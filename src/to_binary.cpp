#include <to_binary.h>

using namespace FAST;
using namespace to_binary;
using namespace std;

ToBinary::ToBinary(string assembler){
  assembler_commands={

  };

  _compile(assembler);
}
ToBinary::~ToBinary(){

}

void ToBinary::_compile(string assembler){
  //Not very efficient so needs sorting
  int pos=0;
  int next_pos=0;
  for(int i=0; i<assembler.length(); i+=0){
    pos=assembler.find('\n');
    assembler.erase(0, pos);
    next_pos=assembler.find('\n');
    //Change to 2 if \n is 2 characters however I am sure I am right
    _deal_with_command(assembler.substr(pos+1, next_pos));
    i=next_pos;
  }
}

void ToBinary::_deal_with_command(string command){
  
}

byte* ToBinary::get_output(){
  return output;
}
