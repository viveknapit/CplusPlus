#include <iostream>
using namespace std;

int main() {
	int t;
	while(t--){
	    int w,x,y,z;
        cin>>w>>x>>y>>z;
        if(x-w>y*z){
            cout<<"u";
        }else if(x-w<y*z){
            cout<<"o\n";
        }else{
            cout<<"filled\n";
        }
	}
	return 0;
}
