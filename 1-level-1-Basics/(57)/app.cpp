
#include <iostream>
#include <array>
using namespace std;

void iceBox(string item){
  if(item == "Coca Cola"){
    cout <<item<<" will Be More cold"  <<"\n";
  }else if (item == "Apple"){
  cout <<item<<" its Natural" <<"\n";
  }
  else if (item == "juice"){
  cout <<item<<" its Natural and best than Coca Cola" <<"\n";
  }else{
      cout <<"Drink some coffie" <<"\n";
  }
}

int main() {
  
  iceBox("Coca Cola");
  iceBox("Apple");
  iceBox("juice");
  
  return 0;
}



