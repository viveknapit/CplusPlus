#include <iostream>
using namespace std;

int main() {
    /*
        sizeof()        Return the size of variable
        Condition? X:Y  return value of X if condition is true or else value of Y
        cast            convert one data type to another
        comma(,)        causes a sequence of operators to be performed 
        &               return the address of a variable
        *               pointer to a variable


    */

   int a,b;
   cin>>a>>b;

        int c = a>b? a-b:b-a;
        cout<<c;

	
	
	return 0;
}
