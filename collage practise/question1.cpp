// posible to rearrange array in that where no adjacent elements are same

#include<bits/stdc++.h>
using namespace std;

bool solve(int arr[], int n){
    int maxFreq = 0;
    map<int,int>m;
    for(int i=0;i<n;i++)m[arr[i]]++;
    
    for(auto i:m)
        maxFreq = max(i.second, maxFreq);
        // cout<<i.second;
    
    if(maxFreq <=n/2)
        return true;
    else 
        return false;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    if(solve(arr, n))
    cout<<"yes\n";
    else 
        cout<<"no\n";
    return 0;
}