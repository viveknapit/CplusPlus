#include<iostream>
using namespace std;

int main(){

    int n1, n2;
    cin>>n1>>n2;

    while(n1%n2 != 0){
      int  r = n1%n2;

      n1 = n2;
      n2 = r;

    }

    cout<<"GCD is "<<n2;
    

    return 0;
}