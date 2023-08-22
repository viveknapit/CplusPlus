#include<iostream>
#include<queue>
using namespace std;

struct node{
    public:
    int data;
    struct node* left;
    struct node* right;
    node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void buildTree3(node* &root){
    queue<node*>q;
    cout<<"Enter data of the root\n";
    int rootData;
    cin>>rootData;
    root = new node(rootData);
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        cout<<"Enter left data of the tree node "<<temp->data<<endl;
        int leftData; cin>>leftData;
        if(leftData !=-1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }
        cout<<"Enter right data of the tree node"<<temp->data<<endl;
        int rightData; cin>>rightData;
        if(rightData !=-1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

void printLevelOrder(node* root){
    queue<node*>q;
    q.push(root);
    q.push(nullptr);
    while(!q.empty()){
        node* newNode = q.front();
        q.pop();
        if(newNode != nullptr){
            cout<<newNode->data<<" ";
            if(newNode->left)
                q.push(newNode->left);
            if(newNode->right)
                q.push(newNode->right);
        }
        else if(!q.empty()){
            cout<<endl;
            q.push(nullptr);
        }
    }
}
int main(){
   node* root = nullptr;
   buildTree3(root);
   printLevelOrder(root);
    return 0;
}