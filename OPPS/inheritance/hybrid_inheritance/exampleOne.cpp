#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void Afunc(){
        cout<<"func A\n";
    }
};
class B: public A{
    public:
    void Bfunc(){
        cout<<"func B\n";
    }
};
class C{
    public:
    void Cfunc(){
        cout<<"func C\n";
    }
};
class D:public B, public C{
    public:
};
int main(){
    D d;
    d.Afunc();
    d.Bfunc();
    d.Cfunc();
    return 0;
}