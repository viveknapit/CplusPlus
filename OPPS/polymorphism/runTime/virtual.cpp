#include<bits/stdc++.h>
using namespace std;

class base{
    public:

    // vitual keyword is using for virtual function polymorphism
    virtual void print(){
        cout<<"this is a print function of base class"<<endl;
    }
   virtual void display(){
        cout<<"this is a display function of base class\n";
    }
};

class derived: public base{
    public:
    void print(){
        cout<<"this is a print function of derived class"<<endl;
    }
    void display(){
        cout<<"this is a display function of derived class\n";
    }
};
int main(){

    base *baseptr;
    derived d;
    baseptr = &d;

    baseptr -> print();
    baseptr ->display();

    return 0;
}