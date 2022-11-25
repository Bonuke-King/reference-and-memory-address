//a reference variable is a reference to an existing variable
//and it is created with the &operator;

#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
string food = "Pizza";
string &meal = food;

cout << food << endl; //outputs pizza
cout << meal << endl; //outputs pizza

//memory address
//memory addressing improve the performance and raduce the code
/*memory address we use & operator to creatae a reference variable. But it can be used to get the memory address of a variable;
which is the location of where the variable is stored on the computer

when a variablae is created in C++ a memory address is assigned to the variable .
and we assign a value to the variable it is stored in this memory address

to access it  use the & operator and the result will represrnt where the variable is stored*/

string animal ="dog";

cout << &animal; //output hexadecimal the address












return 0;
}

















