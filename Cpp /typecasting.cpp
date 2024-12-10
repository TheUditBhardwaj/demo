#include<iostream>
using namespace std;

int main() {
    float a, b;
    cout << "Enter Two Numbers: ";
    cin >> a >> b;

    char op; // Changed int to char to accept characters like +, -, *, /
    cout << "Enter Operator (+, -, *, /): ";
    cin >> op;

    switch(op) {
        case '+':
            cout << "Result: " << a + b << endl;
            break;
        case '-':
            cout << "Result: " << a - b << endl;
            break;
        case '*':
            cout << "Result: " << a * b << endl;
            break;
        case '/':
            if (b != 0)
                cout << "Result: " << a / b << endl;
            else
                cout << "Error: Division by zero is not allowed." << endl;
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            break;
    }

    return 0;
}