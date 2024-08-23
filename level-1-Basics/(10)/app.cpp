//=> 10 - Variables Naming rule
#include <iostream>

/*
1. A variable name must start with a letter or an underscore character (_)
2. A variable name cannot start with a digit or number
3. A variable name can only contain alpha-numeric characters and underscores (a-z, A-Z, 0-9, and _ )
4. Variable names are case-sensitive (age, Age and AGE are three different variables)
5. There is no limit on the length of the variable name
6. A variable name cannot contain spaces
7. The variable name cannot be any Go keywords
*/ 
/*
Camel Case
Each word, except the first, starts with a capital letter:
myVariableName = "John"
------------------------------------
Pascal Case
Each word starts with a capital letter:
MyVariableName = "John"
-----------------------------------
Snake Case
Each word is separated by an underscore character:
my_variable_name = "John"
-----------------------------------

*/ 


using namespace std;
int main() {

  cout << "Price : " << 100  <<" \n";

  cout << "Price after Discount : " << 100 - 15 ;

  return 0; 
}


/**
 * dont use Reversed word
 * like int for if long .....
 */



