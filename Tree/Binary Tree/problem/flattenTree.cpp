//given a binary tree , flatten it into linked list in-place. After flattening , left  of each node should point NULL and right should contain next node in preorder sequence . 
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
    
};
void flatten(Node* root){
    if(root == NULL || root->left == NULL && root->right == NULL)
        return;
    if(root->left !=NULL){
        flatten(root->left);
        
        Node* temp = root->right;
        root->right = root->left;
        root->left = NULL;

        Node* tail = root->right;
        while(tail->right != NULL)
            tail = tail->right;
        
        tail->right = temp;
    }
    flatten(root->right);
}
void inorder(Node* root){
    if(root == nullptr)
        return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
     /*           1
                /   \
               2     3
              / \   / \ 
             4   5 6   7
*/
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    flatten(root);
    inorder(root);
    return 0;
}