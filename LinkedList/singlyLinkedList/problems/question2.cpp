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
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return ;
    }

    node* temp= head;
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

void insersect(node* head1 , node* head2, int pos){
    node* temp1 =head1;
    node* temp2 = head2;
    pos--;
    while(pos--){
        temp1 = temp1->next;
    }
    while(temp2->next !=NULL){
        temp2 = temp2->next;
    }
    temp2->next = temp1;

}
int length(node* head){
    int l = 0;
    node* temp = head;
    while(temp!=NULL){
        l++;
        temp = temp->next;
    }
    return l;
}
int intersection(node* head1, node* head2 ){

    int l1 = length(head1);
    int l2 = length(head2);
    int d= 0;

    node* ptr1;
    node* ptr2;
    if(l1>l2){
        d = l1-l2;
        ptr1 = head1;
        ptr2 = head2;
    }else{
        d= l2-l1;
        ptr1 = head2;
        ptr2 = head1;

    }
    while(d){
        ptr1 = ptr1->next;
        if(ptr1==NULL){
            return -1;
        }
        d--;
    }
    while(ptr1!=NULL && ptr2!=NULL){
        
        if(ptr1 == ptr2){
            return ptr1->data;
        }
        ptr1= ptr1->next;
        ptr2 = ptr2->next;        

    }
    return -1;
    
}


int main(){
    node* head1 = NULL;
    node* head2 = NULL;
    int arr[] = {1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        insertAtTail(head1, arr[i]);
    }
    int arr2[] = {9,10};
    for(int i=0;i<2;i++){
        insertAtTail(head2, arr2[i]);
    }

    insersect(head1, head2, 4);
    display(head1);
    display(head2);
    cout<<intersection(head1, head2);

    return 0;
}