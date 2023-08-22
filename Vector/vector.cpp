#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int main(){

    //implementation
    vector<int> v;
    // add elements
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // traversal
    for(int i=0;i<v.size(); i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    // traversal-2
    //from iterator 
    vector<int>::iterator it;
    for(it=v.begin();it!= v.end(); it++){
        cout<<*it<<"  ";
    }cout<<endl;

    //traversal -3 using auto keyword
    for(auto element:v){
        cout<<element<<endl;
    }

    // pop_back function to pop the end element
    v.pop_back();  // 1 2
    vector<int> v2(3, 50);
    // 50 50 50
    // swap() function to swap to vectors
    swap(v, v2);
    for(auto element:v){
        cout<<element<<" ";
    }cout<<endl;
    for(auto element:v2){
        cout<<element<<" ";
    }cout<<endl;

    // sort vector function
    sort(v.begin(), v.end());


    return 0;
}