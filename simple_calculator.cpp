#include <iostream>

using namespace std;

int main() {
    char operation;
    double a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    switch(operation) {
        case '+':
            cout << a << " + " << b << " = " << (a + b) << endl;
            break;
        case '-':
            cout << a << " - " << b << " = " << (a - b) << endl;
            break;
        case '*':
            cout << a << " * " << b << " = " << (a * b) << endl;
            break;
        case '/':
            if (b != 0) {
                cout <<a << " / " << b << " = " << (a / b) << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Invalid operation! Please enter one of +, -, *, /" << endl;
            break;
    }

    return 0;
}