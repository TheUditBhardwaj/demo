#include <vector>
#include<iostream>
#include <climits>
using namespace std;

// int max_cut(int n, int x, int y , int z){
//     if (n == 0 ){
//         return 0;
//     }

//     if (n<0){
//         return INT_MAX;
//     } 
//      //                         0  2 1 3
//         int option1= 1+max_cut(n-x,x,y,z); // 1 +  1  + 1 =0
//  //                               
//         int option2= 1 + max_cut(n-y,x,y,z); // 

//         int option3= 1+max_cut(n-z,x,y,z);

//         int finalAns = min(option1,min(option2,option3));

//         return finalAns;
// }


// int main(){
//     int n = 15;
//     int x = 2;
//     int y = 2;
//     int z=3;

//     int res= max_cut(n,x,y,z);

//     cout<< res;
// }

 


    int solve(vector<int>& coins, int amount) {
        //base case
        if(amount == 0 ) {
            return 0;
        }

        if(amount < 0 )
            return INT_MAX;

        int mini = INT_MAX;// 3
        
        for(int i=0; i<coins.size(); i++) {
            int coin = coins[i];

        
            if(coin <= amount) {
    
                int recAns = solve(coins, amount - coin);
                if(recAns != INT_MAX){
                    int ans = 1 + recAns;

                    mini = min(mini, ans);
                 
                }    
            }
            
        }
        return mini;
    }


    int coinChange(vector<int>& coins, int amount) {
       int ans = solve(coins, amount);

       if(ans == INT_MAX)
        return -1;
        else
        return ans;
        
    }

// 1,2,5 ==11