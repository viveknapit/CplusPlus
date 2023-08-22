#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"enter size of array"<<endl;
    int n;
    cin>>n;
    cout<<"enter value of array"<<endl;

    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter value to find the index "<<endl;
    int value;
    cin>> value;
    for(int i=0; i<n; i++){
        if(value == arr[i]){
            cout<<i;
        }else{
            cout<<"-1";
            break;
        }
    }
    return 0;
}