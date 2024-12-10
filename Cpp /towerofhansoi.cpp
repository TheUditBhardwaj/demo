#include <iostream>
using namespace std;


void towerOfHanoi(int n, char source, char destination, char temporary, int &totalCost) {
    if (n == 0) {
        return;  
    }


    towerOfHanoi(n - 1, source, temporary, destination, totalCost);


    cout << "Move Disk " << n << " " << source << "-->" << destination << endl;
     

    if (source == 'S' && destination == 'D') {
        totalCost += 2;  
    } else if ((source == 'S' && destination == 'T') || (source == 'T' && destination == 'D') ||
               (source == 'D' && destination == 'T') || (source == 'T' && destination == 'S') ||
               (source == 'D' && destination == 'S')) {
        totalCost += 1;  
    }

    towerOfHanoi(n - 1, temporary, destination, source, totalCost);
}

int main() {
    int n;

   
    cin >> n;

    int totalCost = 0;  

   
    towerOfHanoi(n, 'S', 'D', 'T', totalCost);

    cout << "Total cost=" << totalCost << endl;

    return 0;
}