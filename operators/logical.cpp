#include <iostream>
using namespace std;

int main() {
	
    // && and give us true if both operators are true, false
    // || OR give us true if at least one of the operator are true
    // ! NOT give the oposite logical value of the operend    !(T) = F

    int num = 34;
    if(num%2 ==0 && num%3==0 ){
        cout<<"number is divisble by both . "<<endl;

    }else if(num%2==0 || num%3==0){
        cout<<"number is divisible by only one of them.\n";

    } else{
        cout<<"number is not divisible by any of them.\n";
    }

	
	return 0;
}
