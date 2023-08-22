// find distance between 2 nodes of a binary tree
/*      Problem: find the distance between two nodes in a binary tree . the distance 
                 between two nodes is the minimum number of edges to be traversed to 
                 reach one node from another.
                
        stratergy :
        1.find the LCA (lowest common ancestor)
        2.find distance of n1(d1) & n2(d2) from LCA
        3. return (d1+d2)
*/

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
Node* lca(Node* root, int n1, int n2){
    if(root == nullptr)
        return nullptr;
    if(root->data == n1 || root->data == n2)
        return root;

    Node* leftlca = lca(root->left, n1, n2);
    Node* rightlca = lca(root->right, n1, n2);
    if(leftlca && rightlca) return root;
    if(leftlca) return leftlca;
    return rightlca;
}
int getDist(Node* root, int a , int dist){
    if(root == nullptr)
        return -1;
    if(root->data ==a)
        return dist;

    int leftDist = getDist(root->left, a, dist+1);
    if(leftDist != -1)
        return leftDist;
    return getDist(root->right, a, dist+1);
}
int shortestDist(Node* root, int n1, int n2){
    Node* l = lca(root, n1, n2);
    int d1 = getDist(l, n1, 0);
    int d2 = getDist(l, n2,0);
    return d1+d2;
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
    int n1  = 4, n2 =7;
    cout<<shortestDist(root, n1, n2)<<endl;
    return 0;
}