//                          Traversal of  Tree

#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Pre-order traversal ( root , left , right)
void preOrder(struct Node* root ){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

// In-order traversal (left , root , right)
void inOrder(struct Node* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

// Post - Order Traversal (left, right, root)
void PostOrder(struct Node* root){
    if(root == NULL){
        return ;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}


int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    /*               1
                   /   \ 
                  2     3
                 / \   / \ 
                4   5 6   7
    */
    preOrder(root);
    cout<<endl;
    inOrder(root);
    cout<<endl;
    PostOrder(root);
    return 0;
}