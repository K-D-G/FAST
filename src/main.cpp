//Compiler for FAST
/*
This is the compiler code for the FAST language the aims of this language are:

  Efficency-Meaning code runs fast and in as few steps as possible
  Errors-All errors are shown at compile time to make it easy for developers
  Tasks-It can complete any task from web development to writing an OS
  Object-It is object oriented making it easier to code
  Functional-It also supports functional programming so developers have both options
  Quick-The code compiles as quick as possible; removing libraries that are not used
  Syntax-Simple syntax that can be written quickly and is good for the developer
  Memory-It is not full of stuff that is not needed and is freed by the program

Language syntax:
The syntax for the language is simple and only contains a few keywords
Also the language contains alot of functions in the standard library making it easy to
develop concepts.

Since this is the source code the syntax will be documented in another file
This one to be precise:
syntax.txt

Also there is documentation for it which will be in the github repository and on my website
https://k-d-g.github.io/projects/c++/FAST/index.html

This compiler is going to be used for implementation in an operating system
(Not as the source code but as a language that can be used to program features for it)
The operating system is not going to be shown for some time.

When compiling to machine code the compiler uses two major steps (these are not the typical steps however the typical steps may be followed)
These steps are:
  Convert the code to assembly with NASM syntax
  Convert the code to machine code

When compiling the assembly to machine code the compilation process is done by this software and not by NASM.
The only similarity is that it uses NASM syntax
 */
#include <executor.h>

using namespace FAST;
using namespace executor;
//argc=Number of arguments
//argv=The arguments passed through the command line
//First argument in argv is the name of the program so ignore it
int main(int argc, char* argv[]){
  return Executor::get_mode_and_execute(argc, argv);
}
