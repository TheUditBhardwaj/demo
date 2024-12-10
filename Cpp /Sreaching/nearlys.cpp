#include <iostream>
using namespace std;

// bool searchNearly(int arr[], int n , int target){
//     int s = 0;
//     int e = n-1;
//     int mid = s+ (e-s)/2;


//     while (s<=e)
//     {
//         if (arr[mid-1]==target){
//             return true;
//         }
//         if (arr[mid]==target){
//             return true;
//         }
//         if (arr[mid+1]==target){
//             return true;
//         }

//         else if (target>arr[mid])
//         {
//             s= mid +2;
//         }

//         else{
//             e=mid-2;
//         }

//         mid = s+(e-s)/2;

        
//     }
//     return false;

    
    
// }

int searchNearly(int arr[], int n , int target){
    int s = 0;
    int e = n-1;
    int mid = s+ (e-s)/2;
    int ans=-1;


    while (s<=e)
    {
        if (arr[mid-1]==target){
            return mid-1;
        }
        if (arr[mid]==target){
            return mid;
        }
        if (arr[mid+1]==target){
            return mid+1;
        }

        else if (target>arr[mid])
        {
            s= mid +2;
        }

        else{
            e=mid-2;
        }

        mid = s+(e-s)/2;

        
    }
    return ans;

    
    
}







int main(){
    int arr[] = {20,10,30,50,40,70,60};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 700;

    int index =searchNearly(arr,n,target);
    
    cout<<"At index "<< index<<endl;

    // bool found = searchNearly(arr,n,target);

    // if (found==1){
    //     cout<<"Found"<<endl;
    // }
    // else{
    //     cout<<"NotFound"<<endl;
    // }


}