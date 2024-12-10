#include<iostream>

using namespace std;

int arr[] ={10,20,30};
int n = sizeof(arr)/sizeof(arr[0]);

int main(){
    for (int i = 0 ; i<n;i++){
        for (int j=0; j<n;j++){
            cout<< arr[i] <<","<< arr[j]<<" = ";
            cout<< arr[i] + arr[j]<<endl<<endl;
        }
    }
}
