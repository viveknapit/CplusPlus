#include<bits/stdc++.h>
using namespace std;

int friendParing(int n){
    if(n==0 || n==1 || n==2){
        return n;
    }

    return friendParing(n-1) + friendParing(n-2)* ( n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<friendParing(n);
    return 0;
}