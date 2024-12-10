#include<iostream>
using namespace std;

int Quotient(int divisor , int dividend){
    int s=0;
    int e = dividend;
    int ans =-1;

    int mid = s+(e-s)/2;

    while(s<=e){
        if (mid*divisor== dividend){
            return mid;
        }
        else if (mid*divisor < dividend)
        {
            ans= mid;
            s=mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main(){

    int dvsor = 4;
    int dvend = 0;
    
    int ans = Quotient(abs(dvsor),abs(dvend));
    if( (dvsor>0 && dvend<0)||(dvsor<0 && dvend>0)){
        ans = 0- ans;
         cout<<ans<<endl;
    }
    else if (dvsor == 0 )
    {
        ans = 0;
         cout<<ans<<endl;
    }
    else if (dvend==0)
    {
        cout<<"Infinty";
    }
    
    




   

}