#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }

};

void insertAtHead(node*  &head, int val){
    node* n= new node(val);
    if(head == NULL){
        n->next = n;
        head = n;
        return;
    }
    node* temp = head;

    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;


}
void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head==NULL){
        insertAtHead(head, val);
        return ;
    }

    node* temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}
void display(node* head){

    node* temp=head;
    do
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    } while (temp!=head);
    cout<<endl;
    
    
}

//deletion

void deleteAtHead(node* &head){
    node* temp = head;

    while(temp->next!=head){
        temp = temp->next;
    }
    node* todelete = head;
    temp->next = head->next;
    head = head->next;
    delete todelete;

}
void deletion(node* &head, int pos){
    if(pos==1){
        deleteAtHead(head);
        return ;
    }
    node* temp =  head;
    int count = 1;
    while(count != pos-1){
        temp = temp->next;
        count++;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
int main(){
    node* head=NULL;
    int arr[] = {1,2,3,4,5,6};
    for(int i=0;i<6; i++){
        insertAtTail(head, arr[i]);
    }

    display(head);
    insertAtHead(head, 7);
    deletion(head, 4);
    display(head);
    deleteAtHead(head);
    display(head);
    return 0;
}