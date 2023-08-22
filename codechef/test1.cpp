#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
        cin>>n;
	    string s;
	    cin>>s;
	    bool flag=true;
        int count =0;
	    for(int i=1;i<n;i++){
	        if(count%2!=0){
	            flag = false;
	            break;
	        }
	    }
	    if(flag==true){
	        cout<<"yes\n";
	    }else{
	        cout<<"no\n";
	    }
	}
	return 0;
}
