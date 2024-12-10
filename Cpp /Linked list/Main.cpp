#include <iostream>
using namespace std;

class Node {
        public:
        int data;
        Node* next;

        Node() {
                this->data = 0;
                this->next = NULL;
        }
        Node(int data) {
                this->data = data;
                this->next = NULL;
        }

        ~Node(){
                cout<<" Destructor Called for: "  << this->data <<endl;
        }


};

//I want to insert a node right at the head of Linked List
void insertAtHead(Node* &head, Node* &tail, int data) {
        //check for Empty LL
        if(head == NULL) {
                Node* newNode = new Node(data);
                head = newNode;
                tail = newNode;
        }
        else {
                //step1:
                Node* newNode = new Node(data);
                //step2:
                newNode -> next = head;
                //step3:
                head = newNode;
        }


}
//I want to insert a node right at the end of LINKED LIST
void insertAtTail(Node* &head,Node* &tail, int data) {
        if(head == NULL) {
                Node* newNode = new Node(data);
                head = newNode;
                tail = newNode;
                
        }
        else {
            //step1: creatae a node
            Node* newNode = new Node(data);
            //step2: connect woth tail ndoe
            tail->next = newNode;
            //step3: update tail;
            tail = newNode;
        }

}
void print(Node* head) {

        Node* temp = head;
        while(temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
        }
}

int findLength(Node* &head ) {
        int len = 0;
        Node* temp = head;
        while(temp != NULL) {
                temp = temp->next;
                len++;
        }
        return len;
}

void insertAtPosition(int data, int position, Node* &head, Node* &tail) {
        int len = findLength(head);
        
        if(position == 1) {
                insertAtHead(head, tail , data);
                return;
        }
        else if(position > len) {
                insertAtTail(head, tail, data);
                return;
        }
        else {
            Node* newNode = new Node(data);
            
            Node* prev = NULL;
            Node* curr = head;
            while(position != 1) {
                position--;
                prev = curr;
                curr = curr->next;
            }
            
            //step3:
            newNode -> next = curr;

            //step4:
            prev -> next = newNode;
            
        }
        
}


void deleteNode(Node * &head , Node* &tail , int postion){

if ( head == NULL ){
        cout<<"LL empty " << endl;

}

if(head == tail)
{
        Node* temp =head;
        delete temp;
        head=NULL;
        tail=NULL;
        return; 
}
int len  = findLength(head);


if (postion == 1){
        // first node remove 

        Node* temp = head ;

        head = head -> next;

        temp->next = NULL; // seperate node 

        delete temp;
}

else if (postion == len){
//last 
       Node* ele = head ; 

       while(ele->next !=tail){
               ele= ele->next;
       }

       ele -> next = NULL;    

        delete tail;
        tail = ele;

        print(tail); 

}

else {

// step 1 prev and curr pointoers

Node* prev = NULL;
Node* curr = head;

while (postion !=1)
{
        postion--;
        prev = curr;
        curr=curr-> next;
}
prev->next =curr->next;
curr->next = NULL ;
delete curr;
}
}




int main() {

        Node* head = NULL;
        Node* tail = NULL;
        insertAtHead(head, tail,20);
        insertAtHead(head, tail,50);
        insertAtHead(head, tail,60);
        insertAtHead(head,tail, 90);
        insertAtTail(head, tail, 77);
        // 90 60 50 20 ,77
        print(head);
        cout << endl;
       // insertAtPosition(23,3,head,tail);

        //deleteNode(head,tail,1);
        //deleteNode(head,tail,6);
        deleteNode(head,tail,3);

        print(head);
        cout << endl;

        return 0;
}
