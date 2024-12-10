// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {0, 1, 1, 1, 0, 0, 1, 1};
//     int z = 0;
//     int o = 0;

//     int arrSize = sizeof(arr) / sizeof(arr[0]);

//     for (int i = 0; i < arrSize; i++) {
//         if (arr[i] == 0) {
//             z++;
//         } else if (arr[i] == 1) {
//             o++;
//         }
//     }

//     cout << " zeros: " << z << endl;
//     cout << " ones: " << o << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

void countZerosAndOnes(int arr[], int size) {
    zeros = 0;
    ones = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            zeros++;
        } else if (arr[i] == 1) {
            ones++;
        }
    }
}

int main() {
    int arr[] = {0, 1, 1, 1, 0, 0, 1, 1};


    int arrSize = sizeof(arr) / sizeof(arr[0]);

    countZerosAndOnes(arr, arrSize);

    cout << "zeros: " << z << endl;
    cout << "ones: " << o << endl;

    return 0;
    
}
