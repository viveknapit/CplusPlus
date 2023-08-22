#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int mod = 1e9+7;
    long long  fact(int n){
        if(n==1 or n==0)
            return 1;
        return n*fact(n-1);
    }
    int nCr(int n, int r){
        if(r>n)return 0;
        // long long result = fact(n)/(fact(r)*fact(n-r));
        // cout<<fact(69);
        // return result%mod;
        cout<<fact(43);
    }
};
int main(){
    Solution obj;
    cout<<obj.nCr(69,43);
    cout<<endl;
    cout<<obj.fact(69);
    return 0;
}