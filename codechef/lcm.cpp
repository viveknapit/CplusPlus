#include<iostream>
using namespace std;

int main(){

    int n1 , n2;
    cin>>n1>>n2;

    int tn1 = n1;
    int tn2 = n2;
    int s = tn1*tn2;

    while(n1%n2 != 0){
       int r = n1%n2;

       n1 = n2;
       n2 = r;
    }

    cout<<"LCM is "<<s/n2;

    return 0;
}