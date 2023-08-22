#include<iostream>
using namespace std;

void swap(int arr[], int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
void dnfSort(int arr[], int n){
    int l = 0;
    int mid = 0;
    int h = n-1;
    while(mid <=h){
        if(arr[mid]==0){
            swap(arr, mid, l);
            l++;
            mid++;
        }else if(arr[mid]==1){
            mid++;
        } else{
            swap(arr, mid, h);
            h--;
        }
    }
}
int main(){
    int arr[] = {1,2,0,1,1,0,0,0,1,1,2};
    dnfSort(arr, 11);
    for(int i=0;i<11;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}