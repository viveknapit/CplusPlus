#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int flag = 0;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            cout<<"this is not a prime number.";
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout<<"this is prime number";
    }


    return 0;
}