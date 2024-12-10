#include <iostream>

using namespace std;

void towerOfHanoi(int n , char start ,char end ,char helper ){

    if (n ==0 ){
    return;
}
    towerOfHanoi(n-1, start ,helper , end);
    cout<<"Move from " <<start<<" to "<< end<<endl;
    towerOfHanoi(n-1,helper,end,start);


}


int main(){
    towerOfHanoi(3,'A','B','C');
    
}