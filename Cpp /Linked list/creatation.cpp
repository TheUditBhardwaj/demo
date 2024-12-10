#include <iostream>

using namespace std;


class Node{
    public:
    int  data ;
    Node* next;
 // cons
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int d ){
    Node* temp = new Node(d);

    temp->next = head;
    head= temp;
}

void insertAtTail(Node* &tail , int d){
     Node* temp = new Node(d);
    tail -> next = temp ;

    tail = temp;
}

void printLL(Node* &head){
    Node* temp = head;
    while (temp !=NULL)
    {
        cout<< temp -> data << " ";
        temp = temp -> next;
    }
    cout<< endl;
}

int main() {

    Node* node1 = new Node(10);


    Node* head = node1;
    Node* tail = node1;

    // printLL(head);

    // insertAtHead(head, 12);
    // printLL(head);


    // insertAtHead(head, 15);
    // printLL(head);

    printLL(head);

    insertAtTail(tail, 15);
    printLL(head);
    
    insertAtTail(tail, 13);
    printLL(head);
    insertAtTail(tail, 14);

    printLL(head);




}







































// // Define the structure for a Node in the linked list
// struct Node {
//     int data;       // The value/data contained in the node
//     Node* next;     // Pointer to the next node in the list
// };

// // Function to print the linked list
// void printList(Node* n) {
//     while (n != nullptr) {
//         cout << n->data << "->";
//         n = n->next;
//     }
//     cout << endl;
// }

// int main() {
//     // Allocate nodes in the heap
//     Node* head = new Node();
//     Node* second = new Node();
//     Node* third = new Node();
//     Node* fourth = new Node();
//     Node* fifth = new Node();

//     // Assign data values
//     head->data = 10;
//     second->data = 20;
//     third->data = 30;
//     fourth->data = 40;
//     fifth->data = 50;

//     // Link nodes
//     head->next = second;    // Link first node with second
//     second->next = third;   // Link second node with third
//     third->next = fourth;   // Link third node with fourth
//     fourth->next = fifth;   // Link fourth node with fifth
//     fifth->next = nullptr;  // End of list

//     // Print the linked list
//     printList(head);

//     // Free the allocated memory
//     // delete head;
//     // delete second;
//     // delete third;
//     // delete fourth;
//     // delete fifth;

//     return 0;
// }
