// in pointer we can do following arithemetic operation
// ++ , -- , + , -

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=10;
    int* aptr = &a;

    cout<<aptr<<endl;
    aptr++;
    cout<<aptr<<endl;
    return 0;
}