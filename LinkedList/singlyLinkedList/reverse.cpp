// reverse a linked list
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

    void insertionAtTail(node* &head, int val){
        node* n = new node(val);
        if(head == NULL){
            head = n;
            return;
        }
        
        node* temp = head;
        while(temp->next !=NULL){
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

    //iteretive way to reverse a linked list

    node* reverse(node* &head){
        node* prevptr = NULL;
        node* currptr = head;
        node* nextptr;

        while(currptr!=NULL){
            nextptr = currptr->next;
            currptr->next=prevptr;

            prevptr = currptr;
            currptr = nextptr;
        }

        return prevptr;
    }


// recursive way to reverse a ll
node* recursiveReverse(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead = recursiveReverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}




int main(){
    node* head = NULL;
    insertionAtTail(head, 1);
    insertionAtTail(head,2);
    insertionAtTail(head,3);
    insertionAtTail(head,4);
    insertionAtTail(head,5);
    display(head);
    node* newhead = recursiveReverse(head);
    
    display(newhead);

    return 0;
}
