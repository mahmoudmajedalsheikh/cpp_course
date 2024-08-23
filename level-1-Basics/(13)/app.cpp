/* => 13 - Constant Variable
  - Read Only Value
  - Can't Declare Without Value
*/



#include <iostream>
using namespace std;
#define DAYS 9
/* not good  not best practice to make const => pre processor directive => define 

*/
int main()
{
  const int day = 8;      // const => constant for readonly
  // int salary = 15000;
  const int num = 100;
  // num = 200;
  cout << num;
  // const int x;
  cout << "\n" << DAYS;
  return 0;
}