#include<bits/stdc++.h>
using namespace std;


int upadte(int n, int p, int v){
    int mask = ~(1<<p);
    n = n & mask;
    return (n | (v<<p));
}
int main(){

    cout<<upadte(5,1,1);
    return 0;
}