#include<iostream>
using namespace std;

int main(){

    cout<<"please enter number one\n";
    int num1;
    cin>>num1;
    cout<<"please enter number two\n";
    int num2;

    cin>>num2;
    cout<<"please enter operator\n";

        char op;
        cin>>op;
        
        switch (op)
        {
        case '+':
        cout<<num1+num2<<endl;
            break;
         case '-':
            cout<<num1-num2;
            break;

             case '*':
             cout<<num1*num2;
            break;

             case '/':
             cout<<num1/num2;

            break;
        default:
        cout<<"you entered wrong key";
            break;
        }

return 0;
}