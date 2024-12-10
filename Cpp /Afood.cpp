#include<iostream>
using namespace std;

int main() {
    // int a;
    // cout << "Price of Smartphone 1: ";
    // cin >> a;

    // int b;
    // cout << "Price of Smartphone 2: ";
    // cin >> b;

    // int c;
    // cout << "Price of Smartphone 3: ";
    // cin >> c;

    // if (a < b && a < c) {
    //     cout << "The lowest price is for Smartphone 1: " << a << endl;
    // } else if (b < a && b < c) {
    //     cout << "The lowest price is for Smartphone 2: " << b << endl;
    // } else if (c < a && c < b) {
    //     cout << "The lowest price is for Smartphone 3: " << c << endl;
    // } else {
    //     cout << "There is a tie for the lowest price." << endl;
    // }


    //reverse aaray
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1]; 
        arr[n - i - 1] = temp;
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}