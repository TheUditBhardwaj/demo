#include <iostream>
using namespace std;

void sortZeroOne(int arr[], int n) {
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;
  
    // Step A: Count 0s, 1s, and 2s
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) 
            zeroCount++;
        if (arr[i] == 1) 
            oneCount++;
        if (arr[i] == 2)
            twoCount++;
    }

    // Step B: Place all zeroes first
    int index = 0;
    while (zeroCount--) {
        arr[index] = 0;
        index++;
    }


    // Step C: Place all ones next
    while (oneCount--) {
        arr[index] = 1;
        index++;
    }

    // Step D: Place all twos last
    while (twoCount--) {
        arr[index] = 2;
        index++;
    }
}



int main() {
    int arr[] = {0, 2, 1, 2, 0, 1, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
  
    sortZeroOne(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}




// void zero_one_two(int arr[], int size){
//     int j=0,k=0,k2=0;
//     for(int i=0; i<size; i++){
//         if (arr[i]==0){
//             swap(arr[i],arr[j]);
//             j++;
//             k++;
//             //k2++;
//         }
//         else if (arr[i]==1){
//             swap(arr[i],arr[k]);
//             //j++;
//             k++;
//             //k2++;
//         }
//         else{
//             swap(arr[i],arr[i]);
//             k2++;
//         }
//     }
//     for(int i=0; i<size; i++){
//         cout << arr[i] << "  ";
    
//     }