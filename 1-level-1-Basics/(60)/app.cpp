
/*---------- Return statement
Function (PARMATER = "default Value"){
  ParameterValue -> Argument
  return statement 
}


----------*/
#include <iostream>
#include <array>
using namespace std;


int calc(int n1,int n2){
  cout<<"Opreation Done"<<"\n";
  return n1 + n2;
  // cout<<"Opreation Done"<<"\n";
}


int main() {
  int result = calc(10,20);
  cout <<result<<"\n";
  return 0;
}
