// ---------- Array Class
//Template <Type, Size > Identifier
#include <iostream>
#include <array>
using namespace std;


int main (){
  // int points[4] = {1,2,3,4};      // C-Style Array => Not The Best Make Bugs
  array <int,4> points ={1,2,3,4};   //
  cout << points[0] << "\n";
  cout << points[1] << "\n";
  cout << points[2] << "\n";
  cout << points[3] << "\n";
  cout << "Element Count : " << points.size() << "\n";
  points.fill(10);
    cout << points[0] << "\n";
  cout << points[1] << "\n";
  cout << points[2] << "\n";
  cout << points[3] << "\n";
  points.fill('A'); //she will fill it with asci value 
  cout << points[1] << "\n";
  cout << points[2] << "\n";
  cout << points[3] << "\n";


}
