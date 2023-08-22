// max Consecutive ones
/*                          Problem Statement
    Given an array A of 0s and 1s , we may change up to K values from 0 to 1.
    return the length of the longest(continuous) subarray  that contains only 1s.

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(auto &i:a)
    cin>>i;

    int i=0, ans=0, zerocnt=0;
    for(int j=0;j<n;j++){
        if(a[j] == 0)
        zerocnt++;

        while(zerocnt > k){
            if(a[i]==0){
                zerocnt--;
            }
            i++;
        }
        // zerocnt <= k
        ans = max(ans , j-i+1);

    }
    cout<<ans<<endl;
    return 0;
}