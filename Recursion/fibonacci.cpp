#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n==0 || n==1){
        return n;
    }
    
    int prev =fibonacci(n-1);
    int prev2 = fibonacci(n-2);
    return prev + prev2;
}
int main(){
    int n = n;
    
    cout<<fibonacci(n)<<endl;
    return 0;
}