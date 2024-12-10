#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Function to maintain max heap property on insertion
void heapifyUp(vector<int> &v, int d) {
    v.push_back(d);
    int i = v.size() - 1;

    while (i > 0) {
        int parent = (i - 1) / 2;
        if (v[i] > v[parent]) {
            swap(v[i], v[parent]);
            i = parent;
        } else {
            return;
        }
    }
}

// Function to maintain max heap property on deletion or heapify operation
void heapifyDown(vector<int> &v, int i) {
    int n = v.size();
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && v[left] > v[largest]) {
        largest = left;
    }
    if (right < n && v[right] > v[largest]) {
        largest = right;
    }

    if (largest != i) {
        swap(v[largest], v[i]);
        heapifyDown(v, largest);
    }
}

// Function to build a heap from an unsorted vector
void buildHeap(vector<int> &v) {
    for (int i = (v.size() - 1) / 2; i >= 0; i--) {
        heapifyDown(v, i);
    }
}

// Function to delete the root element of the heap
void deleteFromHeap(vector<int> &v) {
    if (v.size() == 0) {
        cout << "Heap is empty!" << endl;
        return;
    }
    int lastIndex = v.size() - 1;
    swap(v[0], v[lastIndex]);
    v.pop_back();
    heapifyDown(v, 0);
}

// Function to sort the heap using heap sort
void heapSort(vector<int> v) {
    vector<int> sorted;
    buildHeap(v); // Ensure it is a valid heap
    while (!v.empty()) {
        swap(v[0], v[v.size() - 1]);
        sorted.push_back(v.back());
        v.pop_back();
        heapifyDown(v, 0);
    }
    cout << "Sorted elements: ";
    for (int i = sorted.size() - 1; i >= 0; i--) {
        cout << sorted[i] << " ";
    }
    cout << endl;
}

// Function to print the heap
void printHeap(const vector<int> &v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v = {3, 12, 8, 1};

    cout << "Original vector: ";
    printHeap(v);

    // Build a max heap
    buildHeap(v);
    cout << "Heap after building: ";
    printHeap(v);

    // Insert an element into the heap
    heapifyUp(v, 10);
    cout << "Heap after insertion: ";
    printHeap(v);

    // Delete the root element
    deleteFromHeap(v);
    cout << "Heap after deletion: ";
    printHeap(v);

    // Heap sort
    cout << "Heap Sort: ";
    heapSort(v);

    // Max heap using priority_queue
    priority_queue<int> pq;
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);
    cout << "Max element in priority_queue: " << pq.top() << endl;
    pq.pop();
    cout << "Max element after pop: " << pq.top() << endl;

    // Min heap using priority_queue
    priority_queue<int, vector<int>, greater<int> > minHeap;
    minHeap.push(4);
    minHeap.push(2);
    minHeap.push(5);
    minHeap.push(3);
    cout << "Min element in priority_queue: " << minHeap.top() << endl;
    minHeap.pop();
    cout << "Min element after pop: " << minHeap.top() << endl;

    return 0;
}