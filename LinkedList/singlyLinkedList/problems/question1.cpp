// Append last k nodes to start of linked list
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

void insertAtTail(node* &head, int val){
    node *n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }

    node* temp= head;
    while(temp->next!=NULL){
        temp = temp->next;

    }
    temp->next = n;

}
void display(node* head){
    node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;

}
int lengh(node* head){
    int l=0;
    node* temp  = head;
    while(temp!=NULL){
        l++;
        temp = temp->next;
    }
    return l;
}

node* kappend(node* &head, int k){
    node* newtail;
    node* newhead;
    node* tail=head;
    int  l = lengh(head);
    
    int count = 1;
    while(tail->next!=NULL){
        if(count == l-k){
            newtail = tail;
        }
        if(count == l-k+1){
            newhead = tail;
        }

        tail = tail->next;
        count++;
    }
    tail->next = head;
    newtail->next = NULL;

    return newhead;
}


int main(){
    node* head = NULL;
    int arr[] = {1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        insertAtTail(head, arr[i]);
    }
    display(head);
    node* newhead = kappend(head, 3);
    display(newhead);
    return 0;
}