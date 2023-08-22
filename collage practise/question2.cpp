// given an arr and x at every element of arr either we can substract x or add x 
// find the minimal absoulute difference that the process generates.
#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>arr , int x, int  n){
    // int ans = INT_MAX;
    int lb = arr[0]+x;
    int ub = arr[n-1]-x;
    int delta = ub-lb;
    for(int i=0;i<n-1;i++){
    int a = arr[i]+x;
    int b= arr[i+1]-x;
    int currentMax = max(a,b);
    int currentMIn = min(a,b);
    int newDelta = min(delta, newDelta);
    }
    return delta;
}
int main(){
    int n,x;
    cin>>n>>x;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    cout<<solve(arr, x, n);
    return 0;
}