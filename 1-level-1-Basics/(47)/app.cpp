/*
-------------------- loop
---- loop with for
---- loop on Array

Syntax
  for (init,condition,update){
  Block of code
  }

*/

#include <iostream>
#include <array>
// #include <cstring>
#include <string.h>
using namespace std;


int main (){

  // for(int i=0; i < 5 ; i++){
  //   cout<<i<<"\n";
  // };

  int nums[] ={100,200,300,400};

  for(int i =0 ; i< 4;i++){
    cout<< nums[i] << "\n";
  }

}

