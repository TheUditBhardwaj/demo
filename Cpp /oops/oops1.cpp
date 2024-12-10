#include <iostream>
#include <queue>
using namespace std;

struct Node {
int data;
Node* left;
Node* right;

Node(int value) {
data = value;
left = nullptr;
right = nullptr;
}
};

void preOrderTraversal(Node* root) {
if (root == nullptr) {
return;
}

cout << root->data << " ";
preOrderTraversal(root->left);
preOrderTraversal(root->right);
}

Node* createBinaryTree() {
int rootValue;
cin >> rootValue;

if (rootValue == -1) {
return nullptr;
}

Node* root = new Node(rootValue);
queue<Node*> q;
q.push(root);

while (!q.empty()) {
Node* current = q.front();
q.pop();

int leftValue;
cout << "Enter the left child of " << current->data << " (-1 for no node): ";
cin >> leftValue;
if (leftValue != -1) {
current->left = new Node(leftValue);
q.push(current->left);
}

int rightValue;
cout << "Enter the right child of " << current->data << " (-1 for no node): ";
cin >> rightValue;
if (rightValue != -1) {
current->right = new Node(rightValue);
q.push(current->right);
}
}

return root;
}

int main() {
cout << "Enter the value of the root node (-1 for no node): ";
Node* root = createBinaryTree();

cout << "Pre-order traversal: ";
preOrderTraversal(root);
cout << endl;

return 0;
}