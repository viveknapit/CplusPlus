// built binary tree using preOrder traversal and inOder

        /*                              Algorithm
            1. Pic element from preOder & create a node
            2. increment preorder  idx
            3. search for piced element's pos in inorder
            4. call to built left subtree from inorder's 0 to pos-1
            5. call to built right substree from inorder pos+1 to n
            6. return the node
        */
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
int search(int inorder[] , int start , int end , int curr){
    for(int i=start; i<end; i++){
        if(inorder[i]==curr){
            return i;
        }
    }
}
Node* buildTree(int preOrder[] , int inOrder[], int start , int end){
    
    static int idx = 0;
    if(start > end){
        return NULL;
    }
    int curr = preOrder[idx];
    Node* node = new Node(curr);
    idx++;
    
    int pos = search(inOrder, start, end, curr);
    
    if(start == end){
        return node;
    }
    node->left = buildTree(preOrder, inOrder, start, pos-1);
    node->right = buildTree(preOrder, inOrder, pos+1, end);

    return node;
}
void printInorder(struct Node* root){
    if(root == NULL){
        return ;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}
int main(){
    int preOrder[] = {1,2,4,3,5};
    int inorder[]  = {4,2,1,5,3};

    Node* root = buildTree(preOrder, inorder , 0 , 4);
    printInorder(root);
    return 0;
}