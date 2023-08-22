//Rhombus Pattern
/*
            n=5

            * * * * *               row = 1 to n
           * * * * *                col = 1 to n
          * * * * *                 element = (n-1) spaces 
         * * * * *                              (n) *
        * * * * *


*/

#include <iostream>
using namespace std;

int main() {
    int n; 
    cin>>n;

    for(int i=n; i>=1; i--){
        for(int j=1; j<i; j++){
            cout<<" ";
        }
        for(int j=1; j<=n; j++){
            cout<<"* ";
        }

        cout<<endl;

    }
	
	
	return 0;
}
