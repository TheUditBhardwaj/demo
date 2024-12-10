#include <iostream>
#include <vector>

using namespace std;

int findSubsequence(int str[], int size, vector<int> output, int index) {
    // Base case
    if (index >= size) {
        // Print the output vector

        for (int i = 0; i < output.size(); i++) {
            cout << output[i] << " ";
        }
        cout << endl;
        return 1; // Each base case corresponds to one subsequence
    }
    
    int ch = str[index];

    // Exclude the current element and move to the next index
    int excludeCount = findSubsequence(str, size, output, index + 1);

    // Include the current element and move to the next index
    output.push_back(ch);
    int includeCount = findSubsequence(str, size, output, index + 1);

    // Return the total count of subsequences
    return excludeCount + includeCount;
}

int main() {
    int str[] = {1, 2, 3, 4};
    vector<int> output;
    int index = 0; 
    int size = sizeof(str) / sizeof(str[0]);
    int totalCount = findSubsequence(str, size, output, index);
    cout << "Total number of subsequences: " << totalCount << endl;
    return 0;
}













// #include <iostream>
// #include <string>

// using namespace std;

// void findSubsequence(string str, string output, int index) {
//     // Base case
//     if (index >= str.length()) {
//         cout << output << endl;
//         return;
//     }
    
//     char ch = str[index];

//     //ex
//     findSubsequence(str, output, index + 1);

//     // in
//     output.push_back(ch);
//     findSubsequence(str, output, index + 1);
// }

// int main() {
//     string str = "abc";
//     string output = "";
//     int index = 0; 
//     findSubsequence(str, output, index);

// }

// int binsea(int arr[], int s, int e, int target){

//         int mid = s+(e-s)/2;

//         if(s>e){ 
//             return -1;
//         }

//         if (target == arr[mid]){
//             return mid;
//         }
//         if (target> arr[mid]){
//             //rigght
//             return binsea(arr , mid+1 ,e,target);
//         }
//         else{
//             //left
//             return binsea(arr , s, mid-1,target);
//         }
// }

// bool checkSorted(int arr[] , int size , int index){
//     if (index>=size){
//         return true;
//     }
//     if (arr[index]>arr[index-1]){
//         checkSorted(arr,size , index+1);
//         return checkSorted(arr,size , index+1);
//     }
//     else{
//         return false;
//     }
// }

// int main(){
//     int arr[]= {10,12,23,34,36};
//     int size= sizeof(arr)/sizeof(arr[0]);
//     int s = 0;
//     int e = size - 1;
//     int target = 12;

//     int found = binsea(arr, s,e,target);

//     if (found != -1){
//         cout<<"index  => " << found <<endl;
//     }
//     else{
//         cout<<"not found"<< endl;
//     }

    // bool isSorted = checkSorted(arr, size,index);

    // if (isSorted){
    //     cout<<"Sorted array"<<endl;
    // }
    // else{
    //     cout<<"Not Sorted array"<<endl;
    // }
    // return 0;


// }




























// void solve(int arr[], int size , int index,  vector<int> &ans){
//     if (index >= size){
//         return 0;
//     }
//     if (arr[index]%2 == 0){
//         ans.push_back(arr[index]);
//     }
//     solve(arr,size,index+1,ans);
// }

// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8,9};
//     int s = 9;
//     int index = 0;
//     vector<int> ans;
//     solve(arr,s,index,ans);
//     for (int i : ans){
//         cout << i << " ";
//     }
// }


