// ---------- Array

#include <iostream>
using namespace std;

// Syntax  dataType ArrayName[num of item] ={items}; 



int main (){
  // Syntax  dataType ArrayName[num of item] ={items}; 
  int nums[4]= {1,2,3,4};      
  cout << sizeof(int)<<endl;   // 4 Bytes
  cout << sizeof(nums)<<endl;  // 16 Bytes
  // -------------
  double dos[4]= {1,2,3,4};  
  cout << sizeof(double)<<endl;   // 8 Bytes
  cout << sizeof(dos)<<endl;  // 32 Bytes
  // -------------
  // Syntax-2  dataType ArrayName[] ={items}; 
  int rand[] = {100,500,950};
  cout << sizeof(dos)<<endl;
  // -------------
  // Syntax-3  dataType ArrayName[]{items}; 
  int rands[]{100,500,950};
  cout << sizeof(rands)<<endl;
  // 

  return 0;
}
