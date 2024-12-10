#include <iostream>
#include <vector>
using namespace std;

int pivot_ele(vector<int>& v){

    int n = v.size();
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;

    while(start <= end){
        if (start == end ){
            return start;
        }

        else if (v[mid]>v[mid+1])
        {
            return mid;

        }
        else if (v[mid]<v[mid-1])
        {
            return mid-1;                           // [12 , 13 , 14 , 15 , 1 , 2 , 3 , 4 , 5 ]

                                                    // [0     1    2    3   4   5   6   7   8]
        }
        
        else if (start>v[mid])
        {
            end = mid - 1 ; //left
        }
        else{
            start = mid+1;
        }

        mid = start + (end-start)/2;
        
        
    }
    return -1;

}




int main(){

    vector<int> v;

    // v.push_back(12);
    // v.push_back(13);
    // v.push_back(14);
    // v.push_back(15);
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);
    v.push_back(1);
    v.push_back(3);
    int index_piovt = pivot_ele(v);

    cout<< " Element at index  " << index_piovt << endl;

}