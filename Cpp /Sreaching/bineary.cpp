#include <iostream>
#include <vector>

using namespace std;

int search(vector<int> num,int n ,int target){

    int start = 0;
    int end = n-1;
    int mid = (start + end)/2;


    while(start <= end){
        int element = num[mid];

        if (element==target){
            return mid;
        }
        else if(element < target){
            //right
            start = mid+1;
        }

        else{
            //left
            end = mid -1;

        }

        mid = (start + end)/2;
    }
    return -1;

}






int main(){
    int arr[] = {2,3,4,5,6,7,8,9};
    vector<int> num{2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    int target = 5;

    int index = search(num,n,target);

    if (index==-1){
        cout << "Element not found in the array" << endl;
        } else {
            cout << "Element found at index " << index << endl;
            
        }
    }


