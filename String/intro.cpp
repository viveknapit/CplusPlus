#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string str;
    
    // cin>>str;
    
    // cout<<str;

    // diffrent ways to declare string
    // string str1(5, 'n');
    // cout<<str1<<endl;

    // string str2 = "viveknapit";
    // cout<<str2<<endl;

    //input ways
    // string str3;
    // getline(cin, str3);  // getline take all sentence input enter by user while cin only take word util It didn't get space.
    // cout<<str3<<endl;

    
    // diffrent function of string 

    // string s1 = "fam";
    // string s2 = "ily";

    // It is use to add two string
    // s1.append(s2);
    // cout<<s1<<endl;
    // without append
    
    // cout<<s1+s2<<endl;

    // //access charector of a string
    // cout<<s1[2]<<endl;

    //clear

  //  string abc = "abdkjoid;fdjkl dkld dkdio kdiojskfldjoidkljiodhd fkjdlj";
   // cout<<abc<<endl;
    // abc.clear();
    // cout<<abc<<endl;

    // compare function
    string s1 = "abc";
    string s2 = "abc";
    //cout<< s2.compare(s1)<<endl;

    // if(!s1.compare(s2)){
    //   cout<<"strings are equal"<<endl;
    // }

    // empty function
    // cout<<s1<<endl;
    //  s1.clear();

    // if(s1.empty()){
    //   cout<<"string is empty"<<endl;
    // }

    // erase function
     string s3 = "comananaad";
    // s3.erase(4,4);
    // cout<<s3<<endl;

    //substring
  // cout<<s3.find("nan");

  //insert function
  s3.insert(2, "lo");
   // cout<<s3<<endl;

  //length of string
   // cout<<s3.size()<<endl;
  // cout<<s3.length()<<endl;

  // substring
  string s = s3.substr(2, 3);
  // cout<<s<<endl;

  //string to integer
  string s5 = "786";
  int x = stoi(s5);
  cout<<x+2<<endl;

  // integer to string
  int y = 783;
  cout<<to_string(y) + "2" <<endl;

  //sort
  string s6 = "xkljfdoidlk";
  sort(s6.begin(), s6.end());  // include headerfile algorithm 
  cout<<s6<<endl;
    return 0;
}