#include<bits/stdc++.h>
using namespace std;

int knapsack(int value[], int wt[] , int w, int n){
    if(n==0 || w==0){
        return 0;
    }
    
    if(wt[n-1]>w){
       return  knapsack(value, wt, w, n-1);
    }
    return max(knapsack( value, wt, w-wt[n-1], n-1)+value[n-1] , knapsack(value, wt, w, n-1));
}
int main(){
    int n,w;
    cout<<"enter the number of items and capacity of knapsack";
    cin>>n>>w;
    int wt[n];
    cout<<"enter the weight array of items";
    for(int i=0;i<n;i++){
        cin>>wt[i];
    }

    int value[n];
    cout<<"Enter the value array of items";
    for(int i=0;i<n;i++){
        cin>>value[i];
    }
    cout<<knapsack(value, wt, w, n)<<endl;
    return 0;
}