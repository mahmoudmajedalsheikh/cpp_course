/*20- Primitive Data Types => ASCII
  - char => Character
  --- Added Inside Single Quotes => Test With Auto
  --- ASCII Value
  --- ASCII => American Standard Code for Information Interchange.
  --- A Way of Representing Characters As Numbers

  --- Search For Type Casting
  --- Create App To Convert ASCII To Character
  --- Create App To Convert Character To ASCII
*/

#include <iostream>
using namespace std;

int main()
{
//---------------------- char in single quote
  char a = 'A'; //ASCII Table
  cout << sizeof(a) << "\n"; // 1
  auto b = 'B';
  cout << sizeof(b) << "\n"; // 1
//--------------------------- String
  auto c = "C";
  cout << sizeof(c) << "\n"; // 8
//---------------------------
  char d = 'Z';
  cout << int(d) << "\n"; // ASCII value 90
//---------------------------
  cout << int('%') << "\n"; // 37
  cout << int('(') << "\n"; // 40
  cout << int(')') << "\n"; // 41
//---------------------------
  // cout << int("Z") << "\n"; // Error
//---------------------------
  cout << char(81) << "\n"; // Q

  return 0;
}