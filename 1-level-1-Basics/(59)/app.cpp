/*---------- Passing Array as Parameter
Function (PARMATER = "default Value"){
  ParameterValue -> Argument
}


----------*/
#include <iostream>
#include <array>
using namespace std;

// void calc(){

// }
void calc(int nums[],int count){
  int result =0;
  for(int i =0 ;i < count ;i++){
    result += nums[i];
  };
  cout<<"Result : "<<result<<"\n";
  
}

int main() {
int arrayOfNumbers[] ={10,20,30,40};
  int numsSize = size(arrayOfNumbers);
  calc(arrayOfNumbers,numsSize);

  return 0;
}


