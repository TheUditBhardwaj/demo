#include<iostream>

using namespace std;
void rotation(int num[],int k,int n){
    
    int ans[] ={};
    for( int index = 0 ; index<n ; index++){

        int new_index = (index+k)%2;

        ans[new_index] = num[index];


    }

    num = ans;

}

int main(){

    int num[] ={10,20,30,40,50};
    int n = sizeof(num)/sizeof(num[0]);
    int k = 2;
    rotation(num,k,n);
    for(int i =0 ; i<n;i++){

        cout<<num[i]<<" ";
    }

}