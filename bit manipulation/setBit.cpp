#include<iostream>
using namespace std;

int setBit(int n, int p){
    return (n | (1<<p));

}
int main(){
    cout<<setBit(5,1);
    return 0;
}