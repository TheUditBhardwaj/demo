#include <iostream>
#include <queue>

using namespace std;

class node{
    public:

    int data;
    node*left;
    node*right;

    node (int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }

};


node*buildtree(){
    int data;
    cin >> data;
    if(data==-1){
        return NULL;
    }

    node*root= new node(data);

    cout<<"Enter Value for left side of " << data <<endl;

    root->left=buildtree();

    cout<<"Enter Value for right side of " << data <<endl;

    root->right=buildtree();

    return root;
}

void inorder(node*root){
    if (root ==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}


void preorder(node*root){

    if (root ==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}


int height(node*root){

    if (root==NULL){
        return 0;
    }

    int lheight = height(root->left);
    int rheight=height(root->right);

    return 1+ max(lheight,rheight);
}


int main(){
    cout<<"enter";

    node*root=buildtree();
    height(root);
}