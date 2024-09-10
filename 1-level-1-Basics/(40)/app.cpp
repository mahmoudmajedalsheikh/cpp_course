// ---------- Array add and Update Element

#include <iostream>
using namespace std;


int main (){
  int nums[4];

  nums[3] =400;  // Last Element
  nums[2] =300;  //Before Last Element
  nums[1] =200;  //Second element
  nums[0] =100;  //First element
  cout << "Element 1 : " <<nums[0] <<endl;
  cout << "Element 2 : " <<nums[1] <<endl;
  cout << "Element 3 : " <<nums[2] <<endl;
  cout << "Element 4 : " <<nums[3] <<endl;
  //----------------------------------------------
  nums[3] =4000;  // Last Element
  nums[2] =3000;  //Before Last Element
  nums[1] =2000;  //Second element
  nums[0] =1000;  //First element

  // nums[0] =100;  //First element
  cout << "Element 1 : " <<nums[0] <<endl;
  cout << "Element 2 : " <<nums[1] <<endl;
  cout << "Element 3 : " <<nums[2] <<endl;
  cout << "Element 4 : " <<nums[3] <<endl;

  //---------------------------------
  // How to print Array we dont know number of item by use size of

  int awards_nums[]={100,200,300,400,500,600,700};
  // print Array items number
  cout << "size of element : " <<sizeof(int)<<endl;
  cout << "size of Array : " <<sizeof(awards_nums)<<endl;

  // cout << "Array element number : " << sizeof(awards_nums) / sizeof(int)<<endl;
  //or
  cout << "Array element number : " << sizeof(awards_nums) / sizeof(awards_nums[0]) <<endl;

  return  0;
}
