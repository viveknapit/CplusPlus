#include<iostream>
using namespace std;

int factorials(int n){
    int sum=1;
    for(int i=2; i<=n; i++){
        sum  = i*sum;
        
    }
    return sum;
}

int main(){
    int n;
    cin>>n;

    cout<<factorials(n)<<endl;
    return 0;
}