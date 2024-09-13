// ---------- String

/* => What is String 
  -------Types is 
  - C Style string Using
  - String Class Using Standerd Library
  ------Test Type Size 
  -Null Terminated String
  \0 => Null
  Remember 
    String is Array of chars
    \0 => Null
 */





#include <iostream>
#include <array>
using namespace std;


int main (){
  cout << "Iam Dragon\n"; // 12 but not 12 in view Remember 
  cout<< "Iam \0  Dragon\n";  // will stop on \0
  cout<< "\n";
  char name_a[]= "Elzero"; // Array 
  cout << name_a << "\n";   //Print Elzero\0
  cout << sizeof(name_a) << "\n";   //7
  cout << name_a[0] << "\n"; //E
  cout << name_a[5]<< "\n";  //o
  //
  cout << name_a[6]<< "\n";  // \0 => Null => ASCII Value => 0
  cout << int(name_a[6])<< "\n";  // => 8
  cout << int('\b')<< "\n"; 
  cout << int('/')<< "\n"; 
//=========================
  char name_b[]= {'E','l','z','e','r','o','\0'}; 
  cout << name_b << "\n";   //Print Elzero\0
  cout << sizeof(name_b) << "\n";   //7
  cout << name_b[0] << "\n"; //E
  cout << name_b[5]<< "\n";  //o
  //====================================
  string name_c= "Elzero"; 
  cout << name_c << "\n";   //Print Elzero\0
  cout << sizeof(name_c) << "\n";   // 32
  cout << name_c[0] << "\n"; //E
  cout << name_c[5]<< "\n";  //o


}

