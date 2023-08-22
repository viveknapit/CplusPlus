#include<iostream>
using namespace std;

int getBit(int n, int p){
    return ((n & (1<<p))) !=0;

}
int main(){

cout<<getBit(5,2);
    return 0;
}