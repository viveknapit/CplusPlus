#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    
	    string t = "";
	//    for(int i=0;i<n;i++){
	//        t[i] = "";
	//    }
	    
	    int i=0;
	    int j = n-1;
	    while(s.size()>0){
	        if(i%2==0){
	            t += s[i];
	            s.erase(i, 1);
	            
	        }else{
	            t += s[j];
	            s.erase(j, 1);
	        }
	        i++;
	    }
	    cout<<t<<endl;
	}
	return 0;
}
