#include<iostream>
using namespace std;

string dupli(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
   string prev =  dupli(s.substr(1));
    if(ch==prev[0]){
        return prev;
    }else{
        return ch+prev;
    }
}
int main(){
    string s = "aaaaabbbbbbcccccdddd";
    cout<<dupli(s)<<endl;
    return 0;
}