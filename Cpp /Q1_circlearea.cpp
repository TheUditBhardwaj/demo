#include<iostream>
#include<math.h>

using namespace std;

float circle_area(float radius){
    return 3.14*pow(radius,2);
}

int main() {
    float radius;
    cout << "Enter the radius of the circle: ";
    cin>>radius;
    float  area = circle_area(radius);
    cout << area << endl;
    
    } 
