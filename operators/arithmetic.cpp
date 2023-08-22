#include<iostream>
using namespace std;

int main(){
    // int i = 1;

    // int j  = i++ + ++i;
    // cout<<j<<endl;


    int k = 1;
            //1  //3   //2    //1    1
    int s = k++ + ++k + --k - --k + k--;

    cout<<s;


    return 0;
}