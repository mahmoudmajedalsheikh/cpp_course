/*-------------------- For loop Advance Syntax*/
#include <iostream>
#include <array>
// #include <cstring>
#include <string.h>
using namespace std;


int main (){

  int nums[] ={100,200,300,400,500,600};
  int numsCount = sizeof(nums) / sizeof(nums[0]);

  // for (int i = 1; i < 5; i++)
  // {
  //   cout << nums[i] <<endl;
  //   // cout << "" <<endl;
  // }
  // ===================================================

  // for (int i = 0; i < numsCount; i++)
  // {
  //   cout << nums[i] <<endl;
  //   // cout << "" <<endl;
  // }

  // ===================================================

  // for (int i = 0; i < numsCount; i++) cout << nums[i] <<endl; cout << "" <<endl;

// ===================================================
//   int i = 0;

// for(; i < numsCount; i++)
//   {
//     cout << nums[i] <<endl;
//     // cout << "" <<endl;
//   }
// ===================================================
// int i = 0;

// for(; i < numsCount; )
//   {
//     cout << nums[i] <<endl;
//     i++;
//     // cout << "" <<endl;
//   }
// ===================================================
int i = 0;

for(;;)
  {
    cout << nums[i] <<endl;
    i++;
    if( i == numsCount){
      break;
    }
  }

  return 0;
}















