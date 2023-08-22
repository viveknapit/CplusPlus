#include<bits/stdc++.h>
using namespace std;
 unsigned __int64 fact(int n)
{
    if(n==0 or n==1)return 1;
    return n* fact(n-1);
    
}
int main(){
    cout<<fact(66)<<endl;
    return 0;
}