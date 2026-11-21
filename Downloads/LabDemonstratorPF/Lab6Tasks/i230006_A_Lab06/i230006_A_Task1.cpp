#include <iostream>
using namespace std;
int main()
{


// MASAB TAHIR 23I-0006 A


int num1, num2;
char operation;

cout << "Enter first integer: ";
cin >> num1;

cout << "Enter second integer: ";
cin >> num2;

cout << "Choose an operation (+, *, -, /): ";
cin >> operation;

switch (operation) {
        case '+':
cout << "Result: " << num1 + num2 <<endl;
            break;
        case '*':
cout << "Result: " << num1 * num2 <<endl;
            break;
        case '-':
cout << "Result: " << num1 - num2 <<endl;
            break;
case '/':
if (num2 != 0) {
cout << "Result: " << static_cast<double>(num1) / num2 <<endl;
            } 
else {
cout << "Error! Division by zero." <<endl;
            }
            break;
        default:
            std::cout << "Invalid operation." << std::endl;
    }

    return 0;
}


