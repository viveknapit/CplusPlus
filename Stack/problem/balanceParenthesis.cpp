#include<iostream>
#include<stack>
using namespace std;

bool isBalanced(string s){
    stack<char> st;
    for(int i=0;i<s.length(); i++){
        if(s[i] == '(' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            if(st.top()=='('){
                st.pop();
            }else{
                return false;
            }
            
        }
        else if(s[i] == '}'){
            if(st.top()=='{'){
                st.pop();
            }else{
                return false;
            }
            
        }
        else if(s[i] == ']'){
            if(st.top()=='['){
                st.pop();
            }else{
                return false;
            }
            
        }
    }

    if(st.empty()){
        return true;
    }
    return false;
}
int main(){
    if(isBalanced("{[()]    }")){
        cout<<" parenthesis is balenced\n";
    }else {
        cout<<"parenthesis is not balanced";
    }
    return 0;
}