// araay size 10 -> number store 1 to 12 
#include<iostream>
using namespace std;

int main(){

    int hash[12] = {0};

    int arr[10] = {1,3,4,7,5,8,6,4,1,11};
    int arr1[10] = {1,2,3,4,4,5,6,7,7,10};


    // for (int i = 0 ; i< 10 ; i++){
    //     for (int j = i+1 ; j< 10 ; j++){
    //         if (arr[i]==arr[j]){
                
    //             cout<<arr[i]<<" ";
                
    //         }
    //     }
    // }


    for(int i = 0;i < 10;i++){
        hash[arr1[i]]++;
    }

    for (int i =0; i<12;i++){
        if(hash[i] > 1){
            cout<<i<<" ";
        }
    }
}

