#include <iostream>
#include <vector>
using namespace std;

int findFirstOccurrence(vector<int> v, int target) {
    int left = 0;
    int right = v.size() - 1;
    int result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (v[mid] == target) {
            result = mid;
            right = mid - 1; // Look on the left side for the first occurrence
        } else if (v[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

int main() {
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(4);
    v.push_back(4);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);


    int target = 4;
    int index = findFirstOccurrence(v, target);
    if (index != -1) {
        cout << "The first occurrence of " << target << " is at index " << index << ".\n";
    } else {
        cout << target << " is not present in the array.\n";
    }
    return 0;
}