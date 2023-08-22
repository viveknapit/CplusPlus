#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,x;
	    cin>>a>>b>>x;
	    
	 if(a==b){
	     cout<<"YES"<<endl;
         
	 }
     else if(a<b){
        int c = b/a;
        int i = 1;
        for(i=1;i<=c;i++){
            a = a+x;
            b = b-x;
            if(a==b){
                cout<<"yes"<<endl;
            }
        } 
        if( a !=b){
            cout<<"NO"<<endl;
        }
        
     }
     else{
        int c = a/b;
        int i = 1;
        for(i=1;i<=c;i++){
            a = a-x;
            b = b+x;
            if(a==b){
                cout<<"yes"<<endl;
            }
        } 
        if( a !=b){
            cout<<"NO"<<endl;
        }
        
     }
    }
     return 0;
    }