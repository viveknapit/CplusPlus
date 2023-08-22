#include<bits/stdc++.h>
using namespace std;

string remove(string s){
    if(s.length()==0){
        return "";
    }

    char ch=s[0];
    string remain = remove(s.substr(1));
    if(ch=='x' || ch=='X'){
        return remain+ch;
    }else{
        return ch+remain;
    }
}

int main(){
    string s;
    cin>>s;
    cout<<remove(s);
    return 0;
}