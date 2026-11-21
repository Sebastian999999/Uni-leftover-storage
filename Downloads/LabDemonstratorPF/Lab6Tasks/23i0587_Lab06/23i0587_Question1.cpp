#include <iostream>

int main() {
   using namespace std;

   double num1, num2;
   char operation;
   
    cout<< "--------Menu---------\n";
   cout<< "+ Addition \n";
   cout<< "- Subtraction\n";
   cout<< "* Multiplication\n";
   cout<< "/ Divion \n";
    cout<< "---------------------\n";

   cout << "Enter first number: ";
   cin >> num1;

   cout << "Enter second number: ";
   cin >> num2;
   
   cout << "Enter operation (+, -, *, /, %): ";
   cin >> operation;

   switch (operation) {
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
           if (num2 == 0) {
               cout << "Error: Division by zero is not allowed." << endl;
           } else {
               cout << "Result: " << num1 / num2 << endl;
           }
           break;
       case '%':
           if (static_cast<int>(num2) == 0) {
               cout << "Error: Division by zero is not allowed." << endl;
           } else {
               cout << "Result: " << static_cast<int>(num1) % static_cast<int>(num2) << endl;
           }
           break;
       default:
           cout << "Error: Invalid operation." << endl;
           break;
   }

   return 0;
}