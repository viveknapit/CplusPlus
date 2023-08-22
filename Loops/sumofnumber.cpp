#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int sum=0;
    for(int i=1; i<=n; i++){
        sum = sum+i;
       cout<<" loop "<<i<<" => "<< i <<" + 1 "<<" = "<<sum<<endl;
    }
     cout<<"total = "<<sum<<endl;

    return 0;
}