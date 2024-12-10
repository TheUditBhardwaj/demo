#include <iostream>
using namespace std;

// void swap(int &a, int &b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int posnegindex(int arr[], int size) {
//     int j = 0;
//     for (int i = 0; i < size; i++) {
//         if (arr[i] < 0) {
//             swap(arr[i], arr[j]);
//             j++;
//         }
//     }

//     for (int i = 0; i < 8; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl; // Return the index of the first positive number
// }

// int main() {
//     int arr[] = {-1, 5, -2, 5, 4, -6, 5, 4};
//     int a = posnegindex(arr, 8);
//     cout << "Index of the first positive number: " << a << endl;

//     // Optionally print the rearranged array
//     cout << "Rearranged array: ";
    
//     cout << endl;

//     return 0;
// }


void posnegindex(int arr[], int size){
    int j=0;
    for(int i=0; i<size; i++){
        if (arr[i]<0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int i=0; i<size; i++){
        cout << arr[i] << "  ";
    }
}

int main(){
    int arr[] = {-1,5,-2,5,4,-6,5,4};
    int size = 8;
    posnegindex(arr,size);
}