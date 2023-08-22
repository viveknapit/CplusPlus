#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val ;
        next = NULL;
    }
};

void insertAtTail(node* &head , int val){
    node* n = new node(val);
    if(head ==NULL){
        head = n;
        return;
    }
    node* temp = head;

    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
} 
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
void evenOdd(node* &head){
    node* odd = head;
    node* even = head->next;
    node* startNode = head->next;
    while(odd->next!=NULL && even->next !=NULL){
        if(odd->next!=NULL){
        odd->next = even->next;

        odd = odd->next;
        }
        if(even->next->next!=NULL){
        even->next=odd->next;
        even = even->next;
        }
    }
    if(even->next==NULL){
        odd->next = startNode;

    }
    else if(odd->next==NULL){
        odd->next = startNode;
        even->next = NULL;
    }
}

int main(){
    int n;
    cin>>n;
    node* head = NULL;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        insertAtTail(head, arr[i]);
    }
    display(head);
    evenOdd(head);
    display(head);

    return 0;
}