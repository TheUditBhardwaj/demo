// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int d) {
//         this->data = d;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// Node* buildTree() {
//     int data;
//     cin >> data;

//     if (data == -1) {
//         return NULL;
//     }

//     Node* root = new Node(data);

//     cout << "Enter data to add to the left of " << data << endl;
//     root->left = buildTree();

//     cout << "Enter data to add to the right of " << data << endl;
//     root->right = buildTree();

//     return root;
// }


// void inOrder(Node*root){

//     if(root==NULL){
//         return;
//     }

//     inOrder(root->left);
//     cout<< root->data<<" ";
//     inOrder(root->right);

// }

// void preOrder(Node*root){
//     if (root== NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     preOrder(root->left);
//     preOrder(root->right);
// }

// void postOrder(Node*root){
//     if (root==NULL){
//         return;
//     }
//     postOrder(root->left);
//     postOrder(root->right);
//     cout<<root->data<<" ";
// }


// int main() {
//     cout << "Enter root value :" << endl;
//     Node* root = buildTree();

//     cout<<"InOrder";
//     inOrder(root) ;
//     cout<<endl;

//     cout<<"PreOrder";
//     preOrder(root);
//     cout<<endl;

//     cout<<"PostOrder";
//     postOrder(root);
//     cout<<endl;
// }





#include <iostream>
#include <queue>

using namespace std;

class node{
    public:

    int data;
    node*left;
    node*right;

    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;



    }

};

node*buildTree(){
    int data;
    cin >>data;

    if (data==-1){
        return NULL;
    }

    node*root = new node(data);

    cout<< "enter data for left side of " << data<< endl;

    root->left= buildTree();

    cout<< "enter data for right side of " << data<< endl;

    root->right= buildTree();


    return root;

}


void levelOrderTraversal(node* root) {
    if (root == NULL) {
        return;
    }

    queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        node* current = q.front(); 
        q.pop();

        cout << current->data << " "; 


        if (current->left != NULL) {
            q.push(current->left);
        }
        if (current->right != NULL) {
            q.push(current->right);
        }
    }
}


void preOrder(node*root){
    if (root==NULL){
        return;

    }

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(node*root){
     if (root==NULL){
        return;

    }

   
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

    void postOrder(node*root){
        if (root==NULL){
            return;
        }
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";

    }


    int calculateHeight(node* root) {
    if (root == NULL) {
        return 0;
    }


    int leftHeight = calculateHeight(root->left);
    int rightHeight = calculateHeight(root->right);


    return 1 + max(leftHeight, rightHeight);
}


int main(){
    node*root=buildTree();
    levelOrderTraversal(root);
    
    cout<<calculateHeight(root);


}