#include<iostream>
using namespace std;

int unique(int arr[], int n){
    int xorSum = 0;
    for(int i=0;i<n;i++){
        xorSum = xorSum ^ arr[i];
    }
    return xorSum;
}
int main(){
    int arr[] = {1,2,3,4,3,2,1};
    cout<<unique(arr, 7);
    return 0;
}