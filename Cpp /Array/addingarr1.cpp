#include<iostream>

using namespace std;

int main(){
    

    int num=9;
    // cout<< "Enter the NUmber : ";
    // cin>>num;

    int arr[]={1,2,3,4,5,66,7,8,1};
    int n = sizeof(arr)/sizeof(int);
    cout<<n;
    n = n+1;
cout<<n;
    arr[n-1]=num;

    for (int i = 0; i < n; i++)
    {
        cout<< arr[i];
    }
    


}