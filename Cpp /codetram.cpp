#include <iostream>
using namespace std;

class CircularQueue {
private:
    int *arr;
    int front;
    int rear;
    int size;
    int count;

public:
    CircularQueue(int n) {
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
        count = 0;
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue is full" << endl;
            return;
        }
        if (front == -1) {
            front = 0;
        }
        rear = (rear + 1) % size;
        arr[rear] = x;
        count++;
        cout << "Enqueued: " << x << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Dequeued: " << arr[front] << endl;
        front = (front + 1) % size;
        count--;
        if (count == 0) {
            front = -1;
            rear = -1;
        }
    }

    void frontElement() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
        } else {
            cout << "Front element: " << arr[front] << endl;
        }
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == size;
    }
};

int main() {
    int queueSize, operations;
    cin >> queueSize >> operations;

    CircularQueue cq(queueSize);

    for (int i = 0; i < operations; i++) {
        string command;
        cin >> command;

        if (command == "enqueue") {
            int x;
            cin >> x;
            cq.enqueue(x);
        } 
        else if (command == "dequeue") {
            cq.dequeue();
        } 
        else if (command == "front") {
            cq.frontElement();
        } 
        else if (command == "isEmpty") {
            cout << (cq.isEmpty() ? "true" : "false") << endl;
        } 
        else if (command == "isFull") {
            cout << (cq.isFull() ? "true" : "false") << endl;
        }
    }

    return 0;
}
