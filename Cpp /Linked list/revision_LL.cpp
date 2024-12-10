#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createLinkedList(const vector<int>& arr) {
    if (arr.empty()) return nullptr;
    
    Node* head = new Node();
    head->data = arr[0];
    Node* temp = head;
    
    for (int i = 1; i < arr.size(); i++) {
        Node* newNode = new Node();
        newNode->data = arr[i];
        temp->next = newNode;
        temp = newNode;
    }
    temp->next = nullptr;
    return head;
}

void displayList(Node* head) {
    if (!head) return;
    
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data;
        if (temp->next != nullptr) cout << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* deleteMiddleNode(Node* head) {
    if (!head) {
        cout << "No node left" << endl;
        return nullptr;
    }
    
    if (!head->next) {
        cout << "No node left" << endl;
        return nullptr;
    }
    
    Node* slow = head;
    Node* fast = head;
    Node* prev = nullptr;
    
    while (fast != nullptr && fast->next != nullptr) {
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }
    
    prev->next = slow->next;
    delete slow;
    
    return head;
}

int main() {
    string input;
    getline(cin, input);
    
    vector<int> elements;
    int num;
    for (size_t i = 0; i < input.length(); i++) {
        if (isdigit(input[i])) {
            num = input[i] - '0';
            elements.push_back(num);
        }
    }
    
    Node* head = createLinkedList(elements);
    
    if (elements.size() == 1) {
        cout << "No node left" << endl;
    } else {
        cout << "Before deletion: ";
        displayList(head);
        
        head = deleteMiddleNode(head);
        
        if (head) {
            cout << "After deletion: ";
            displayList(head);
        }
    }

    return 0;
}