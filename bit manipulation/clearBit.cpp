#include<iostream>
using namespace std;

int clearBit(int n, int p){
    int mask = ~(1<<p);
    return (n & mask);
}
int main(){

    cout<<clearBit(5,2);
    return 0;
}