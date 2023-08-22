#include <iostream>
using namespace std;

int main() {
	int cases;
	cin>>cases;
	while(cases--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	   int maxRepeat = 0;
	   int maxRepeati = 0;
	   int max = 0;
	   for(int i=1;i<n;i++)
	   if(a[i] == a[i-1]){
	       maxRepeati = i;
	       max++;
	       if(max>maxRepeat){
	           maxRepeat = max;
	           
	       }else{
	           max = 0;
	       }
	   }
	 
	   int count = 0;
	   for(int i=0;i<n;i++){
	       if(a[i] == a[maxRepeati]){
	           
	       }else{
	           count++;
	       }
	   }
	   
        cout<<count<<endl;
 	}
	return 0;
}
