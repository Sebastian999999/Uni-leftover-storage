#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2, result;

 
    cout << "Select an operation:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;

    cout << "Enter the number of the operation you want to perform: ";
    cin >> operation;

 
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    
    switch (operation) {
        case '1':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case '2':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case '3':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case '4':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid operation. Please select a valid operation." << endl;
    }

    return 0;
