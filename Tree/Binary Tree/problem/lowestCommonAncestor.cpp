
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

bool getPath(Node* root , int n1, vector<int> &path){
    if(root == NULL)
        return false;
    path.push_back(root->data);
    if(root->data == n1){
        return  true;
    }
    if(getPath(root->left, n1, path) || getPath(root->right, n1, path))
        return true;
    
    path.pop_back();
    return false;
}
int LCA(Node* root , int n1, int n2){
    vector<int> path1, path2;

    if(!getPath(root, n1, path1) || !getPath(root, n2, path2))
        return -1;
    
    int pc;
    for(pc = 0; pc<path1.size() && path2.size();pc++){
        if(path1[pc] != path2[pc])
            break;
    }
    return path1[pc-1];
}

Node* LCA2(Node* root, int n1 , int n2){
    if(root == nullptr)
        return nullptr;
    if(root->data == n1 || root->data == n2)
        return root;
    
    Node* leftLCA = LCA2(root->left, n1, n2);
    Node* rightLCA = LCA2(root->right, n1, n2);

    if(leftLCA && rightLCA)
        return root;
    if(leftLCA != nullptr)
        return leftLCA;
    
    return rightLCA;
}
int main(){
    /*            1
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
    int n1 = 6, n2 =7;
    Node* lca = LCA2(root ,n1,n2);
    if(lca == nullptr)
        cout<<"LCA doesn't exist";
    else
        cout<<lca->data<<endl;
    return 0;
}