// fibonacci sequence is  a sequence where  next term is the sum of  previous two terms

#include<iostream>
using namespace std;

void fib(int n){
    int first = 0;
    int second = 1;
    int nextTerm;

    for(int i=1; i<=n; i++){
        cout<<first<<" ";
        nextTerm = first + second;
        first = second;
        second = nextTerm;
        
    }

}

int main(){
        int n;
        cin>>n;
        
        fib(n);
    
    return 0;
}