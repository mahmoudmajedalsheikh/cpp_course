/*-------------------- Nested For loop  */
#include <iostream>
#include <array>
// #include <cstring>
#include <string.h>
using namespace std;


int main (){
  string products[] = {"Item1","Item2","Item3"};
  string sizes[] = {"small","Large","xlarg"};

  // for(int i = 0;i < 3 ; i++){
  //   cout << "Product Name : "<< products[i] <<endl;
  //   cout << "Sizes: "<<endl;
  //   for(int j = 0;j < 3 ; j++){
  //     cout << sizes[j] <<endl;
      
  //   }
  //         cout << "==========" <<endl;
  // }


  for(int i = 0;i < 3 ; i++){
    cout << "Product Name : "<< products[i] <<endl;
    cout << "Sizes: "<<endl;
    for(int j = 0;j < 3 ; j++){
      cout << sizes[j];
      if(j < 2){
        cout <<" , ";
      }
    }
          cout <<"\n"<< "==========" <<endl;
  }
}