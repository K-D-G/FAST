#include <compiler.h>

using namespace FAST;
using namespace compiler;
using namespace std;
using namespace to_assembler;
using namespace to_binary;

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
    the_file.open(file);
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

//Fix with output type
void Compliler::write_data(output){
  ofstream write_file;
  write_file.open(output, ios::out|ios::binary);
  write_file.write((char*)&output, sizeof(output));
  write_file.close();
}


int Compiler::run(){
  if(exe(cache=true)==0){
    system("./cache");
    remove("cache");
    return 0;
  }
  return -1;
}

int Compiler::exe(bool cache=false){
  if(cache){output=cache;}
  ToAssembler assembler(data);
  if(assembler.check_output()==0){
    ToBinary binary(assembler.get_output());
    write_data(binary.get_output());
    return 0;
  }
  return -1;
}
