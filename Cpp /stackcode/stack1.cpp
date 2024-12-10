// #include <iostream>
// #include<stack>
// using namespace std;

// int main(){
//     stack<int> st ;

//     st.push(34);
//     st.push(33);
//     st.push(32);
//     st.push(35);
//     st.push(38);

//     cout<< st.size()<<endl;
//     while (st.size()!=0)
//     {
//         cout<<st.top()<<endl;
//         st.pop();
//     }
    
    
// }





#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
    int n, k;
    cin >> n;
    queue<int> q;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q.push(x);
    }
    cin >> k;

    stack<int> s;
    cout << "Stack with original order of first " << k << " elements: ";
    for (int i = 0; i < k; i++) {
        cout << q.front() << " ";  // Print the element before adding it to the stack
        s.push(q.front());
        q.pop();
    }
    cout << endl;

    cout << "Stack after reversing first " << k << " elements: ";
    stack<int> tempStack = s;
    while (!tempStack.empty()) {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    cout << endl;

    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }

    for (int i = 0; i < n - k; i++) {
        q.push(q.front());
        q.pop();
    }

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}


























// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int no_of_pro;
//     cin >> no_of_pro;

//     vector<int> arr(no_of_pro);
//     for (int i = 0; i < no_of_pro; i++) {
//         arr[i] = i + 1;
//     }

//     int value;
//     cin >> value;

//     int pos;
//     cin >> pos;

//     // Insert the value at the specified position
//     arr.insert(arr.begin() + pos - 1, value); // Subtract 1 to adjust for 0-indexed vector

//     // Print the updated list
//     for (int i = 0; i < arr.size(); i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }