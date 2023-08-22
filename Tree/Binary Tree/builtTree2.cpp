//                            build tree from postOrder and inOrder


/*      Algorithm:
                1. Start from the end of postOrder & pic an element to create a node
                2. Decrement postOder idx
                3. Search for piced element's pos in inoder
                4. call to build right subtree from inorder's pos+1 to n
                5. call to build left subtree from inorder 0 to pos-1 
                6. Return the node

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

int Search(int inOrder[], int start, int end , int curr){
    for(int i=start; i<end ; i++){
        if(inOrder[i] == curr){
            return i;
        }
    }
}
Node* buildTree(int postOrder[], int inOrder[] , int start, int end){
    static int idx = end;
    int curr = inOrder[idx];
    if(start>end)return NULL;
    Node* node = new Node(curr);
    idx--;

    int pos = Search(inOrder, start, end , curr);
    
    if(start == end){
        return node;
    }
    node->right = buildTree(postOrder, inOrder, pos+1, end);
    node->left = buildTree(postOrder, inOrder, start, pos-1);
    return node;

}

void printInorder(struct Node* root){
    if(root == NULL){
        return;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}
int main(){
    int postOrder[] = {4,2,5,3,1};
    int inOrder[] = {4,2,1,5,3};

    Node* node = buildTree(postOrder , inOrder , 0, 4);
    printInorder(node);

    return 0;
}