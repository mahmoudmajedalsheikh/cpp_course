// ----------Acess to Array Item

#include <iostream>
using namespace std;


int main (){


  int nums[]{100,200,300,400};      
  cout << "first Element : " <<nums[0]<< endl;
  cout << "second Element : " <<nums[1]<< endl;
  cout << "Third Element : " <<nums[2]<< endl;
  cout << "fourth Element : " <<nums[3]<< endl;

  cout << "Location : " << &nums[0] <<"\n";
  cout << "Location : " << &nums[1] <<"\n";
  cout << "Location : " << &nums[2] <<"\n";

  // Location : 0xb9c83ff840
  // Location : 0xb9c83ff844
  // Location : 0xb9c83ff848

  return 0;
}

















