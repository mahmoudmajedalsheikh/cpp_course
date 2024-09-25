/*-------------------- Loop Break Continue */
#include <iostream>
#include <array>
using namespace std;

int main() {
//========== App-1 Count Postive And Even Number
  // int nums[]={10,20,-20,13,30,-30,40};
  // int result =0;
  // int numSize = size(nums); //7

  // for(int i = 0 ; i < numSize ; i++){

  //   if (nums[i] % 2 == 0 && nums[i] >0){
  //     result += nums[i];
  //   };
  // };
  // cout<< result <<"\n";

//================= App-2 guess The Number
// int guessNumber = 7;
// int guessTries = 0;
// int choose;
// cout <<"Please Guess Number Beween 1 & 10\n";

// while(true){
//   cin >>choose;
//   if(choose == guessNumber){
//     cout <<"correct guess\n";
//     break;
//   }else{
//     cout<<"Sorry , wrong Guess\n";
//     guessTries++;
//   }
//   if(guessTries == 3){
//     cout<<"Sorry , you faild the correct is" <<guessNumber<<"\n";
//     break;
//   }
// }

//================= App-3 Reversed Element from user 
int vals[5];
int inp;
cout <<"Type 5 Number To Reverse"<<"\n";
for(int i = 4;  i > -1  ;i--){
  cin >> inp;
  vals[i] = inp;
}
cout <<"============"<<"\n";
for(int i = 0; i < 5 ;i++){
  cout << vals[i] <<"\n";
  
}
cout <<"============"<<"\n";


  return 0;
}

