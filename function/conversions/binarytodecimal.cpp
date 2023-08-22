#include<iostream>
using namespace std;

int binaryTodecimal(int n){
        int ans=0;
        int x=1;

        while(n>0){

            ans += (n%10)*x;
            x *=2;
            n/=10;
        }
        return ans;


}

int main(){
        int n;
        cin>>n;
        int ans = binaryTodecimal(n);
        cout<<ans;
    
    return 0;
}