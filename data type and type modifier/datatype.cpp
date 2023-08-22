// primitive - integer , float , character , boolean 
// derived - function , array , pointer, reference
// user defined - class, structure, union , enum

#include<iostream>
using namespace std;

int main(){


    int a;
    a=12;
    cout<<"size of int "<<sizeof(a)<<endl;

    float b;
    b=3.5;
    cout<<"size of float "<<sizeof(b)<<endl;

    char c;
    c='a';
    cout<<"size of char "<<sizeof(c)<<endl;

    short int si;
    long int li;

    cout<<"size of shortint "<<sizeof(si)<<endl;

    cout<<"size of long int "<<sizeof(li)<<endl;

    return 0;
}