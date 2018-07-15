#include <compiler.h>

using namespace FAST;
using namespace compiler;
using namespace std;

Compiler::Compiler(char* file_path, char* mode){
  file=file_path;
  operation=mode;
}

void Compiler::set_output_file(char* output_file){
  output=output_file;
}

int Compiler::compile(){
  ifstream the_file;
  try{
    the_file.open(file)
  }catch(){
    return -1;
  }

  if(the_file.is_open()){
    while(!the_file.eof()){
      the_file>>data;
    }
  }
  the_file.close();

  if(operation=="run"){return run();}
  else(operation=="exe"){return exe();}

  return -1;
}

int Compiler::run(){

}

int Compiler::exe(){

}
