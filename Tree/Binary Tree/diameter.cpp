//                          Diameter of a tree
/*          Diameter:- Number of nodes in longest path b/w any two leaves.
                                    or
            longest path between any two node is diameter
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
/*                1
                /   \
               2     3
              / \   / \ 
             4   5 6   7
*/

// time complexty : O(n^2)
int height(struct Node* root){
    if(root==NULL){
        return 0;
    }
    int lheight = height(root->left);
    int rheight = height(root->right);
    return max(lheight, rheight)+1;
}
int calcDiameter(struct Node* root){
    if(root == NULL){
        return 0;
    }
    int currDiameter = height(root->left)+height(root->right)+1;
    int lDiameter = calcDiameter(root->left);
    int rDiameter = calcDiameter(root->right);
    return max(currDiameter , max(lDiameter, rDiameter));
}

// optimised height 
// time complexity : O(N)
int diameter(Node* root, int* height){
    if(root==NULL){
        *height = 0;
        return 0;
    }
    int lh=0, rh=0;
    int ldiameter = diameter(root->left , &lh);
    int rdiameter = diameter(root->right, &rh);
    int currDiameter = lh+rh+1;
    *height = max(lh,rh)+1;
    
    return max(currDiameter, max(ldiameter,rdiameter));
}
int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout<<calcDiameter(root)<<endl;

    // optimised diameter calculater
    int height = 0;
    cout<<diameter(root, &height);
    return 0;
}