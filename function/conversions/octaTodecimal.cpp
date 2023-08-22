#include<iostream>
using namespace std;

int OctaToDecimal(int n){
    int ans = 0;
    int x = 1;

    while(n>0){
        ans += (n%10)*x;
        x *=8;
        n /=10;

    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    cout<<OctaToDecimal(n);

    return 0;
}