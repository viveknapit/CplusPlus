// calculate n raised to power p 
#include<bits/stdc++.h>
using namespace std;

int pwr(int n , int p){
    if(p==0){
        return 1;
    }
    int prev = pwr(n , p-1);
    return n*prev;
}
int main(){
    int n,p;
    cin>>n>>p;
    cout<<pwr(n,p);
    return 0;
}