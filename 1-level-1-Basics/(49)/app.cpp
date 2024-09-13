/*-------------------- For loop Advance Training */
#include <iostream>
#include <array>
// #include <cstring>
#include <string.h>
using namespace std;


int main (){
  int nums[] ={100,200,300,400,500,600};
  int numsSize= sizeof(nums) / sizeof(nums[0]);
  // for (int i = 0; i < numsSize; i+=2)
  // {
  //   cout << nums[i] <<endl;
  //   // cout << "" <<endl;
  // }
//--------------------------------------
  // for (int i = 0; i < numsSize; i++)
  // {
  //   cout << nums[i] <<endl;
  //   i++;
  //   // cout << "" <<endl;
  // }
  //output = 100 300 500
//--------------------------------------
//--- 600 500 400 300

  for (int i = (numsSize - 1);i > 1 ; i--)
  {
    cout << nums[i] <<endl;
    // cout << "" <<endl;
  }




  return 0;
}

