
/*----------
Function (PARMATER = "default Value"){
  ParameterValue -> Argument
}


----------*/
#include <iostream>
#include <array>
using namespace std;

void details(string msg = "welcome", string name ="unknown"){
  cout <<msg<<" "<<name<<"\n";
}
// or  the default value must be the last parameter
// void details(string msg, string name ="unknown"){
//   cout <<msg<<" "<<name<<"\n";
// }




int main() {

  details("Hello","Ahmed");
  details("Hello");
  details();
  

  return 0;
}



