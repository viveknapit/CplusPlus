#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data ;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;

    }
};
// my logic

void rightView(struct Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    cout<<root->data<<" ";
    while(!q.empty()){
        if(root == NULL) return;
        Node* node = q.front();
        q.pop();
        if(node != NULL){
            if(node->right){
                q.push(node->right);
                cout<<node->right->data<<" ";
            }
        }else 
        q.push(NULL);
    }
}

// other method
void rightview2(struct Node* root)
{
    if(root == nullptr) return ;
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        int n = q.size();
        for(int i=0;i<n;i++){
            Node* curr = q.front();
            q.pop();
            if(i==n-1)
             cout<<curr->data<<" ";
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }
    }
}
int main(){
    /*               1
                    / \
                   2   3
                  / \ / \
                  4 5 6 7
                        \    
                         8
    */
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->right = new Node(8);
    // rightView(root);
    // // cout<<endl;
    rightview2(root);
    return 0;
}