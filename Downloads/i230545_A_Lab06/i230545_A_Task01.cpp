#include<iostream>
using namespace std;

int main() {
    double num1, num2;
    char Operator;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Select which operation you want to perform:\n"
         << "+ Addition\n"
         << "- Subtraction\n"
         << "* Multiplication\n"
         << "/ Division\n"
         << ".  Cancel\n";
    cin >> Operator;

    switch (Operator) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Cannot divide by zero." << endl;
            }
            break;
        case '.':
            cout << "You have cancled the program" << endl;
        default:
            cout << "Wrong selection." << endl;
    }

    return 0;
}
