#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int A[n];
        int B[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    
	    for(int i=0;i<n;i++){
	        cin>>B[n];
	    }
	    int count = 0;
	    int maxCount =0;
	    for(int i=0;i<n;i++){
	        if(A[i]!=0 && B[i]!=0)
	            count++;
	         else{
	            maxCount = max(maxCount, count);
	            count=0;
	        }
	    }
	    maxCount = max(maxCount, count);
	    cout<<maxCount<<endl;
	}
	return 0;
}
