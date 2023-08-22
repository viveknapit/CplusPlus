#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int n , int i, int key){

    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }

    firstOcc(arr, n, i+1, key);
}


int lastOcc(int arr[], int n , int i, int key){

    if(i==0){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }

    firstOcc(arr, n, i-1, key);
}
int main(){
    int n;
    cin>>n;
    int key;
    cin>>key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<firstOcc(arr, n, 0, key)<<endl;
    cout<<lastOcc(arr, n, n, key)<<endl;
    return 0;
}