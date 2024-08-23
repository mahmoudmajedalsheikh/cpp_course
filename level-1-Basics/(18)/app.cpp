/* 18 => Primitive Data Types
  - int => Integer
  --- Test Numbers
  --- Test Floating Point vs Int
  --- Store From -2147483648 To 2147483647
  --- INT_MIN and INT_MAX Constants
  --- Check Limits Header File limits.h
  --- Test Size Of Data Types Without Variables & Use End Line

  - = Assignment Operator
*/

#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
  int num_one = 100;
  int num_two = -500;
  int num_three = 0;
  int num_four = true;
  // int num_five = "Elzero"; // Problem
  cout << num_one << endl;
  cout << num_two << endl;
  cout << num_three << endl;
  cout << num_four << endl;
//----------------------------------
  cout << INT_MIN << endl;
  cout << INT_MAX << endl;
//----------------------------------
  cout << sizeof(int) << endl;    // 4 Bytes 
  cout << sizeof(char) << endl;   // 1 Bytes
  cout << sizeof(float) << endl;  // 4 Bytes
  cout << sizeof(double) << endl; // 8 Bytes
  cout << sizeof(bool) << endl;   // 1 Bytes

  int last_num = 10.5;
  cout << last_num << endl;// 10  // what happen truncate
  return 0;
}








