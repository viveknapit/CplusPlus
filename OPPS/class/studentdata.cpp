#include<iostream>
using namespace std;

class student{
    string name;
    public:
    
    int age;
    bool gender;

    // default constructor
    student(){
        cout<<"Default Constructor"<<endl;
    }

    // parameterized constructor
    student(string s, int a, bool g){
        name = s;
        age = a;
        gender = g;
    }
    // copy constructor
    student(student &a){
        name = a.name;
        age  = a.age;
        gender = a.gender;

    }
    void printInfo(){
        cout<<"Name = "<<name<<endl;;
        cout<<"Age =  "<<age<<endl;
        cout<<"gender  "<<gender<<endl; 
    }

    void setName(string s){
        name = s;
    }
    void getName(){
        cout<<name<<endl;
    }

    //operator overloading
    bool operator == (student &a){
        if(name == a.name && age == a.age && gender ==a.gender){
            return true;
        }
        return false;
    }
};

int main(){
    // student arr[3];
    // for(int i=0;i<3; i++){
    //     string s;

    //     arr[i].setName(s);
    //     cin>>arr[i].age;
    //     cin>>arr[i].gender;
    // }
    // for(int i=0;i<3;i++){
    //     arr[i].printInfo();
    //     cout<<endl;
    // }
    student a("Urvi" , 20 , 1);
    a.printInfo();
    student b;
    // copy constructor - default
    student c = a;
    

    // operator overloading
    if(c==a){
        cout<<"same"<<endl;
    }
    else{
        cout<<"not same"<<endl;
    }
    return 0;
}