// Pair sum problem
/* check if there exits two elements in an  array such that their sum is equal to given k
*/

#include<bits/stdc++.h>
using namespace std;

bool pairsum(int a[], int n, int k){

    int st = 0;
    int en = n;
    for(int i=0;i<n;i++){
        if(a[st]+a[en] == k){
            cout<<st<<" "<<en<<endl;
            return true;
        }
        else if(a[st]+a[en] >k){
            en--;
        }else{
            st++;
        }
    }

    return false;
}
int main(){
    int n,k;
    cin>>n>>k;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<pairsum(a,n,k);
    return 0;
}