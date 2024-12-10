#include<iostream>
using namespace std;

// int getpaint(int n , int k){
//     if (n ==1){
//         return k ;
//     }
//     if (n ==2){
//         return k+k*(k-1);
//     }
//     int ans = (k-1) *(getpaint(n-1,k)+getpaint(n-2,k));
//      //         2              24            9
//     //         2         n-1 =2  => 9   +  n-2 =1 => 3 
//     return ans;
// }



// int main(){
//     int n = 3;
//     int k = 3;
//     int ans  = getpaint(n,k);
//     cout<< ans<< endl;
// } 



// int get_paint(int n , int k){
//     if (n ==1 ){
//         return k;
//     }
//     if (n == 2){
//         return k +k*(k-1);
//     }
//     int ans = (k-1) * (get_paint(n-1,k)+ get_paint(n-2,k));
//     return ans;
// }



// int main(){
//     int n = 3;
//     int k = 4;
//     int ans =  get_paint(n , k);
//     cout<< ans << endl;
// } 




int paint(int n , int k ){
    if (n ==1 ){
        return k ;
    
    }


    if (n==2)
    return k+k*(k-1);

    int ans= (k-1) * (paint(n-1,k), paint(n-2,k));
    return ans;

}



int main(){
    int n = 3 ;
    int k = 3;

    int ans = paint(n,k);
}



