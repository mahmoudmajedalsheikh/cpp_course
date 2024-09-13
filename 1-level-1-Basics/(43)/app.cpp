// ---------- Array Methods

#include <iostream>
#include <array>
using namespace std;

/* = Useful Array Methods 
- at
- front 
- back
- fill
- size
- empty
- 
*/

int main (){
  array <int ,4> nums = {100,200,300,400};
  cout << nums[0] << "\n";
  cout << nums.front() << "\n"; // front => give me the first element in array
  cout << nums[3] << "\n";         
  cout << nums.back() << "\n";       // back => give me last element in array
  cout << nums.at(0) << "\n";        // at() === []  we write what inside it 
  cout << nums.size() << "\n";       // size() array element count        
  cout << nums.empty() << "\n";      // empty()  => return bool if array empty
  cout << nums[0] << "\n";            
  cout << nums[0] << "\n";          

}