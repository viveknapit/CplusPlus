// function is a piece of code that performs a specific  task.
/*
        syntax

        returnType functionName (parameter1, parameter2,....){
            function body
        }

*/

#include<iostream>
using namespace std;

int add(int num1, int num2){
    int sum = num1+num2;
    return sum;
}

int main(){
    int n1, n2;
    cin>>n1>>n2;

    cout<<add(n1,n2);
    return 0;
}