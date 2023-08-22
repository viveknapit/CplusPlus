#include<iostream>
using namespace std;

int main(){

    // dataType arrName[size];
    // or  dataType arrName[size] = {value1, value2, value3.......}
    int array[4];
    array[0] = 10;
    array[1]= 20;
    array[2] = 30;
    array[4] = 40;

    //or 
    int arr[3] = {3,5,7};

    //by user

    cout<<"enter the size of array";
    int n ;
    cin>>n;

    int arrr[n];

    for(int i=0; i<n; i++){
        cin>>arrr[i];
    }

    for(int i=0; i<n; i++){
        cout<<arrr[i]<<endl;
    }

    return 0;
}