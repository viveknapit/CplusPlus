#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left ;
    struct Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;

    }
};

int sumT (Node* root , int t){
   if(root == NULL)
        return -1;
    queue<Node*>  q;
    q.push(root);
    q.push(NULL);
    int temp = 0, ans = 0;

    while(!q.empty()){
        Node* node =  q.front();
        q.pop();
        if(node!=NULL){
            if(temp == t)
                ans += node->data;
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }
        else if(!q.empty()){
            q.push(NULL);
            temp++;
        }
    }
    return ans;
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout<<sumT(root , 1)<<endl;
    return 0;
}