#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void Afunc(){
        cout<<"func A\n";
    }
};
class B:public A{
    public:
    void Bfunc(){
        cout<<"func B\n";
    }
};
class C:public B{
    public:
    
};

int main(){
    C c;
    c.Afunc();
    c.Bfunc();
    return 0;
}