// Src Code 

//pre-Processor Statement => process for thing before compile=> translate to (0,1)
#include <iostream>
// include => pre processor directive , like import => include files  in the program like =iostream=library in C++

// main function
using namespace std;
int main() {
  cout << "Line - 1\n";
  cout << "Line - 2\n";
  cout << "Line - 3\n";
  return 0;
}

/*
how  to run the program
1 - pre-Processor for header file iostream
2 - build translation unit take all files (content header file and files in on file to compile it )
3 - compile all in object file source.obj => the file who wait 
4 - linker (who link all objects to export .exe file) which we can run it
*/ 


