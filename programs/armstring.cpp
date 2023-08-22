/*      Armstrong number
        153 
        if we calculate cube of every digit and add them we got actual value
        1 + 125 + 9 = 153
*/
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int originaln = n;
    int armastrong = 0;
    while(n>0){
        int lastdigit = n%10;
         armastrong = pow(lastdigit, 3);
        n = n/10;
    }
    if(armastrong == originaln){
        cout<<" this is armstrong number";
    } else{
        cout<<" this is not a armstrong number";
    }
    
    return 0;
}