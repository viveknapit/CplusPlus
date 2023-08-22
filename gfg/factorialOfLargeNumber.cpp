#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int ans(int n){
        if(n==0)
            return 1;
        int pre  = ans(n-1);
        return pre * n;
    }
    vector<int> factorial(int N){
       vector<int> an;
       int a = ans(N);
       stack<int>st;
       while(a>0){
           int s = a%10;
           st.push(s);
           a/10;
       }
       while(!st.empty()){
           an.push_back(st.top());
           st.pop();
       }
       return an;
    }
};
int main() {
    int n;
    cin>>n;
    Solution ob;
    vector<int> result = ob.factorial(n);
    for(int i=0;i<result.size()-1;i++)
        cout<<result[i];
    

    return 0;
}