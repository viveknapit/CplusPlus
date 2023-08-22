#include<bits/stdc++.h>
using namespace std;

//function overloading

class vivek{
    public:
    void fun(){
        cout<<"I am a function with no orguments\n";

    }
    void fun(int x){
        cout<<"I am a function with int argument\n";
    }
    void fun(double x){
        cout<<"I am a function with double argument\n";
    }
};
int32_t main(){

    vivek obj;
    obj.fun();
    obj.fun(4);
    obj.fun(4.2);

    return 0;
}