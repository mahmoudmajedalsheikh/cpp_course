#include <iostream>
#include <array>
using namespace std;

void sayHello(string msg , string name){
  cout <<msg<<" "<< name <<"\n";
}


int main() {
  
  //call Function
  sayHello("Hello","Mahmoud"); //"Mahmoud" -> Argument
  sayHello("Hi","osama"); //"Mahmoud" -> Argument
  sayHello("welcome","Ahmed"); //"Mahmoud" -> Argument
  
  return 0;
}
