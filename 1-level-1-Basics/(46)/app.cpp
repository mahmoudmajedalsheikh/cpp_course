// ---------- String Concatenating

#include <iostream>
#include <array>
// #include <cstring>
#include <string.h>
using namespace std;


int main (){

char fName [] = "Osama ";
char lName [] = "Elzero ";

  cout<< fName <<lName;
  cout<< strcat(fName,lName) <<endl;

  string firstName = "Osama ";
  string lastName = "Elzero ";
  cout<< firstName + lastName <<endl;
  cout<< firstName.append(lastName) <<endl;

  return 0;
}
