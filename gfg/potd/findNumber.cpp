#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    long long findNumber(long long N){
        vector<long long> a;
        int t = N*N*N;
        for(long long i=1; i<t; i+=2){
            bool isOdd = true;
            while(i!=0){
                int temp = i%10;
                if(temp%2==0){
                    isOdd = false;
                }
                i /=10;
            }
            if(isOdd)
                a.push_back(i);
            
        }
        
        return a[N];
    }
};

int  main(){
    int t;
    cin>>t;
    while(t--){
        long long N;
        cin>>N;
        Solution ob;
        cout<<ob.findNumber(N)<<endl;
    }
    return 0;
}