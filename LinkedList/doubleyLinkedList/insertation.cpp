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
void insertAtHead(node* &head, int data){
    node* temp = new node(data);
    temp->next= head;
    if(head !=nullptr)
    head->prev = temp;
    head = temp;
}
void insertAtTail(node* &head, int data){
    node* newNode = new node(data);
    if(head == nullptr)
        insertAtHead(head,data);
    node* temp = head;
    while(temp->next !=nullptr)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}
void insertAtPos(node* &head, int data, int pos){
    if(pos == 1)
        return insertAtHead(head, data);
    
    node* newNode = new node(data);
    node* pre = nullptr;
    node* curr = head;
    int cnt = 0;
    while(++cnt< pos){
        pre = curr;
        curr=curr->next;
    }
    pre->next = newNode;
    newNode->next = curr;
    curr->prev = newNode;
    newNode->prev = pre;
}
void printList(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    node* head =NULL;
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertAtHead(head,5);
    insertAtHead(head,6);
    insertAtTail(head, 5);
    insertAtTail(head, 9);
    insertAtPos(head,11, 5);
    printList(head);
}