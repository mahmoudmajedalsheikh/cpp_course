/*-------------------- Loop Break Continue */
#include <iostream>
using namespace std;

int main() {

  int nums[] = {10,20,30,40,50};

  for(int i =0 ; i<5 ; i++){
// -----see different now continue
    if(nums[i] == 20){
      continue;
    }
    cout<<nums[i] <<"\n";
    cout <<"After \n";

    
    // if(nums[i] == 20){
    //   continue;
    // }

}
  ///============ Break
  for(int i =0 ; i<5 ; i++){
// -----see different now continue
    if(nums[i] == 20){
      break;
    }
    cout<<nums[i] <<"\n";
    cout <<"After \n";

    
    // if(nums[i] == 20){
    //   continue;
    // }

}






    return 0;
}
