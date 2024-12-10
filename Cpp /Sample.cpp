#include <iostream>
#include <string>
#include <queue>

using namespace std;

// Function to construct a max heap from a given string
void buildMaxHeap(string str, int n) {
    // Create a priority queue to store the characters
    priority_queue<char> heap;

    // Push all the characters of the string onto the heap
    for (int i = 0; i < n; i++) {
        heap.push(str[i]);
    }

    // Print the characters in level order (Max Heap)
    cout << "Max Heap (Level Order): ";
    while (!heap.empty()) {
        cout << heap.top() << " ";
        heap.pop();
    }
    cout << endl;
}

int main() {
    string str;

    // Input the string
    cout << "Enter a word: ";
    cin >> str;

    // Build the max heap

    buildMaxHeap(str, str.length());

    return 0;
}