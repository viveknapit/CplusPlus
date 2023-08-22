//number pattern
/*
        n=5
                1                   row = 1 to n
               1 2                  col = two cols
              1 2 3                          ^
             1 2 3 4                    space  numbers
            1 2 3 4 5                   (n-i)      i

*/

#include <iostream>
using namespace std;

int main() {
	int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
                cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        
        cout<<endl;
    }
	
	return 0;
}
