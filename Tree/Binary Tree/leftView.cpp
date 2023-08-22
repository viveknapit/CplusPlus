#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left =  nullptr;
        right = nullptr;
    }
};
void rightView(struct Node* root ){
    if(root == nullptr)return ;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int n= q.size();
        for(int i=0;i<n;i++){
            Node* curr = q.front();
            q.pop();
            if(i==0)cout<<curr->data<<" ";
            if(curr->left)q.push(curr->left);
            if(curr->right)q.push(curr->right);
        }
    }
}

int main(){
    /*                 1
                    /    \
                   2      3
                  / \    / \
                 4   5  6   7
    */
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    rightView(root);
    return 0;
}