#include <executor.h>

using namespace FAST;
using namespace executor;
using namespace compiler;
using namespace std;

string Executor::get_documentation(){

  ifstream documentation_file;
  documentation_file.open("documentation.txt");
  if(documentation_file.is_open()){
    while(!documentation_file.eof()){
      documentation_file>>documentation;
    }
  }
  return documentation;
}

int Executor::get_mode_and_execute(int argc, char* argv[]){
  Compiler compiler();
  //Index 0 is the file name so FAST.exe, index 1 is the operation (run etc), index 2 is the input file
  for(int i=3; i<sizeof(argv)-3; i++){
    if(argv[i]=="-v"){
      cout<<"1.0"<<endl;
    }else if(argv[i]=="-d"){
      cout<<get_documentation()<<endl;
    }else if(argv[i]=="-o"){
      //SORT ALSO THE COMPILER INIT UP TOP
      compiler.set_output_file(argv[i+1]);
    }
  }
  return compiler.compile();
}
