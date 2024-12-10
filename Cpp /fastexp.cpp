#include<iostream>
using namespace std;

int fastexp(int a , int b){
    int ans = 1;
    while (b>0){
        if (b&1){
            //odd
            ans=ans*a;
        }
        a=a*a;
        b=b/2; // half 

        }
     return ans;
    
}

int main(){

    cout<< fastexp(5,4) <<endl;
} 