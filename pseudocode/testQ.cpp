#include<iostream>
using namespace std;;;;;

int increment(int t){
    return ++(--(++t));
}

int main(){
    int x=2,y=1,z=5;
    do{
        cout<<z--<<" ";
    }while((x&y) || (z+1));
    cout<<endl;
    cout<<(increment(11));
}