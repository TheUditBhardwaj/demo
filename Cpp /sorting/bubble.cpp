#include<iostream>
#include<vector>
using namespace std;

void print(const vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void bubble(vector<int> &v) {

    int n = v.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
            }
        }
    }
}

void selection(vector<int>& v){
    int n = v.size();

    for (int i =0; i <n-1;i++){
        int minindex=i;
        for (int j = i+1; j<n;j++){
            if( v[j]<v[minindex]){
                minindex = j;
            }
        }
        swap(v[i],v[minindex]);
    }
}



int main(){
    //vector<int> v = {5,4,8,9,1};
    vector<int> v;
    v.push_back(10);
    v.push_back(9);
    v.push_back(8);
    v.push_back(7);
    v.push_back(6);
    v.push_back(5);
    v.push_back(4);
    // bubble(v);
    selection(v);
     for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }


}