// ---------- App on Array

#include <iostream>
#include <array>
using namespace std;


int main (){
  int points = 0;
  int answers[3];

  cout << "Type The missing Number in the sequences :  " <<endl;
  cout << "Sequence 1:  " <<endl;
  cout << " 1, 5, 10, 16,_ " <<endl;
  cin >> answers[0];
  cout << "Type The missing Number in the sequences :  " <<endl;
  cout << "Sequence 1:  " <<endl;
  cout << " 2, 4, 8 , 16 , _ " <<endl;
  cin >> answers[1];
  cout << "Type The missing Number in the sequences :  " <<endl;
  cout << "Sequence 1:  " <<endl;
  cout << " 1,  1, 2, 3, _ " <<endl;
  cin >> answers[2];

  int sequences[3][5]={
    {1, 5, 10, 16, 23},
    {2, 4, 8 , 16 ,32},
    {1,  1, 2, 3,  5}
  };


  if(answers[0] == sequences[0][4]){
    cout << "True Answer" << endl;
    points++;
  }else{
    cout<<"Wrong Answer"<<"\n";
  }
  if(answers[1] == sequences[1][4]){
    cout << "True Answer" << endl;
    points++;
  }else{
    cout<<"Wrong Answer"<<"\n";
  }
  if(answers[2] == sequences[2][4]){
    cout << "True Answer" << endl;
    points++;
  }else{
    cout<<"Wrong Answer"<<"\n";
  }

  cout<<"Your Points is : "<<points;

  // array <int ,4> nums = {100,200,300,400};
  // cout <<  << "\n";

}
