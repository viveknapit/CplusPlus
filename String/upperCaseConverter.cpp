#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    string name =  " VivEk";
    // convert to uppercase 
    for(int i=0;i<name.length();i++){
        if(name[i] >= 'a' && name[i]<='z'){
            name[i] -= 32;
        }
    }
    cout<<name<<endl;

    //convert to lower case
    for(int i=0;i<name.length();i++){
        if(name[i] >= 'A' && name[i]<='Z'){
            name[i] += 32;
        }
    }
    cout<<name<<endl;


//inbuilt function
    string s = "kajgjklajdj";

    transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout<<s<<endl;

    transform(s.begin(), s.end() , s.begin(), ::tolower);
    cout<<s<<endl;
    return 0;
}