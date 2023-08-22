/*                 Queue
    stores a list of items in which an item can be inserted at one end and 
    removed from the other end only

    operations:-
    enqueue(X)
    dequeue()
    peek()
    empty()

*/


#include<iostream>
#define n 100
using namespace std;

//Implementation
class queue{
    int* arr;
    int front;
    int back;
    public:
    queue(){
        arr = new int[n];
        front = -1;
        back = -1;

    }

    void push(int x){
        if(back == n-1){
            cout<<"queue is overflowed\n";
            return ;
        }
        back++;
        arr[back] = x;
        if(front == -1){
            front++;
        }
    }
    void pop(){
        if(front == -1 || front > back){
            cout<<"no element in queue \n";
            return ;
        }
        front++;
    }
    int peek(){
        if(front == -1 || front > back){
            cout<<"no element in queue \n";
            return -1;
        }
        return arr[front];
    }
    bool empty(){
        if(front == -1 || front > back){
            return true;
        }
        return false;
    }
};
int main(){

    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.empty()<<endl;
    return 0;
}