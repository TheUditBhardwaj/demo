#include<iostream>
using namespace std;
int findOddOccur(int arr[],int n ){

    int s=0;
    int e = n-1;
    int mid = s+(e-s)/2;


    while (s<=e){
        //single ele
        if(s==e){
            return s;
        }


        else if (mid%2==0){
            if(mid+1 < n && arr[mid]==arr[mid+1]){
                // right
                s= mid+2; // bcz we already checked it 
            }
            else{
                e = mid;
            }
        }

        else if (mid%2==1) {

            if (mid-1>=0 && arr[mid]==arr[mid-1]){
                s = mid+1;
            }

            else{
                e = mid-1;
            }

        }
        mid = s+(e-s)/2;

    }
    return -1;
}

int main(){
    //int arr[]={10,10,2,5,5,5,5,20,20,11,11,10,10};
    int arr[]={10,10,2,2,5,5,2,20,20,1,1};
    //int arr[]={10,10,3,2,2,5,5,5,5,20,20,1,1}; not valid case 

    int n = sizeof(arr)/sizeof(arr[0]);

    int index = findOddOccur(arr,n);
    if (index == -1){
        cout<<"NOT FOUND";



    }
    else{


    cout<<"At Index "<<index<<" And Element is "<<arr[index]<<endl;



    }
}


