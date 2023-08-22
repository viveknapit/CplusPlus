#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
   struct Node* left;
    struct Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = nullptr;
    }
};
// int height(Node* root){
//     if(root == NULL){return 0;}
//     return max(height(root->left),height(root->right))+1;
// }

// otimised
bool isBalanced(Node* root , int* height){
    if(root == NULL){
        
        return true;
    }
    int lh = 0;
    int rh = 0;
    if(isBalanced(root->left , &lh)==false)
        return false;
    if(isBalanced(root->right , &rh)==false)
        return false;
    *height = max(lh,rh)+1;
    if(abs(lh-rh)<=1)
        return true;
    else 
        return false;
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left= new Node(4);
    root->left->right =  new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->right = new Node(7);
    root->right->right->right->right= new Node(7);
    int height = 0;
    if(isBalanced(root,&height))
    cout<<"balanced tree\n";
    else cout<<"not balanced tree\n";
    return 0;
}