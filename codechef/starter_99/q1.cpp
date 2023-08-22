#include<iostream>
using namespace std;

bool solve(int x, int y, int z){
    if((y*z)%x != 0)
        return false;
        return true;
}
int main() {
	int t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(solve(x,y,z) == true ){
	        cout<<y*z<<" " <<x;
	       // return 0;
	    }else if(solve(y,x,z) == true){
	        cout<<x*z<<" "<<y;
	       // return 0;
	    }else if(solve(z,x,y) == true){
	        cout<<x*y<<" "<<endl;
	       // return 0;
	    }else{
	        cout<<-1<<endl;
	    }
	       
	}
	return 0;
}
