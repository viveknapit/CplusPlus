//                               height of binary tree 
/*        height of a tree is longest path between root node and leaf node of a tree    
*/
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right ;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int height(struct Node* root){
    if(root == NULL) return 0;
    return max(height(root->left),height(root->right))+1;
}
int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node (6);
    root->right->right = new Node(7);
    cout<<height(root);
    return 0;
}