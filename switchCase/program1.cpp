#include<iostream>
using namespace std;

int main(){

    char button;
    cin>>button;

    switch (button)
    {
    case 'a':/* constant-expression */
        /* code */
        cout<<"hello";
        break;
    case 'b':
        cout<<"namaste";
        break;
    case 'c':
        cout<<"hola";
        break;
    case 'd':
        cout<<"good morning";
        break;
    default:
        cout<<"I am a still learning robot.";
        break;
    }

return 0;
}