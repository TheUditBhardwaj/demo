#include <iostream>

using namespace std;

int get_unique(int arr[],int n){
    int ans=0;

    for (int i =0; i<n ;i++){
        ans = ans^arr[i];
    }
return ans;
}

int main() {
    int arr[]={1,2,3,1,2,3,4,5,5,6,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<(get_unique(arr,n))<<endl;

}