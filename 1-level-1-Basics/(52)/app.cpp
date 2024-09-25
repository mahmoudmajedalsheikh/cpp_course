/*-------------------- do while loop 
do{ //do it first
  {Block of Code}
}while(Conation Is True);
*/
#include <iostream>
using namespace std;

int main() {

  int index = 4; // try to put it in 6

  while(index < 6){
    cout << index <<"\n";
    index++;
  };
  cout<<"=========================\n";
  do{
    cout << index <<"\n";
    index++;
  }while(index < 6);
  
  cout<<"=========================\n";
  index =6;
  do{
    cout << index <<"\n";
    index++;
  }while(index < 6);



    return 0;
}