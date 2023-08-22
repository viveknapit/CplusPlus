#include<bits/stdc++.h>
using namespace std;

void subSequence(string s ,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string remain= s.substr(1);

    subSequence(remain, ans);
    subSequence(remain, ans+ch);

}
int main(){
    subSequence("ABC", "");
    cout<<endl;
    return 0;
}