#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int val){
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};
void insertAtHead(node* &head, int val){
    node* newNode= new node(val);
    if(head == nullptr){
        head = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void deleteAthead(node* &head){
    if(head == nullptr)
    {
        cout<<" linked list is empty";
        return;
    }
    node* temp = head;
    temp->next->prev=nullptr;
    head = temp->next;
    temp->next = nullptr;
    delete temp;
}
void deleteAtTail(node* &head){
    node* temp = head;
    while(temp->next->next != NULL)
        temp = temp->next;
    
    node* todelete = temp->next;
    temp->next = nullptr;
    delete todelete;
}
void print(node* &head){
    if(head == nullptr){
        cout<<"linked list is empty";
        return ;
    }
    node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    node* head = nullptr;
    insertAtHead(head, 1);
    insertAtHead(head, 3);
    insertAtHead(head , 44);
    insertAtHead(head, 33);
    insertAtHead(head, 34);
    deleteAthead(head);
    deleteAtTail(head);
    print(head);
}