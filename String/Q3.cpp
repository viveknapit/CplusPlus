//most occured char in given string
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "jlkjagljdkfjklsa";

    int feq[26];
    for(int i=0;i<26;i++)
        feq[i]=0;
    
    for(int i=0;i<s.size();i++)
        feq[s[i]-'a']++;
    
    char ans = 'a';
    int maxF = 0;
    for(int i=0;i<26;i++)
    {
        if(feq[i] >= maxF){
            maxF = feq[i];
            ans = i+'a';
        }
    }

    cout<<maxF<<" "<<ans<<endl;
    return 0;
}