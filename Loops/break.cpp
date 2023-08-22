#include<iostream>
using namespace std;

int main(){


    int pocketMoney=3000;

    for(int date =1; date<=30; date++){

        if(pocketMoney == 0){
            break;
        }
        if(date%2==0){
            continue;
        }
        cout<<date<<"  you can go today"<<endl;
        pocketMoney = pocketMoney-300;

    }

return 0;
}