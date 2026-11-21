// Name: Saleh Mobashar, Roll No: 23i-0724, Section: A, Lab #6

#include <iostream>
using namespace std;

int main()
{
  int num1, num2, result;
  char operation;

  // display menu
  cout << "Menu" << endl;
  cout << "-----------------------------" << endl;
  cout << "+ Addition" << endl;
  cout << "- Subtraction" << endl;
  cout << "* Multiplication" << endl;
  cout << "/ Division" << endl;
  cout << "% Division" << endl;
  cout << ". Cancel" << endl;

  cout << "-----------------------------" << endl;

  // Input the two numbers
  cout << "Enter first number = ";
  cin >> num1;
  cout << "\nEnter second number = ";
  cin >> num2;
  // get the operation type from the user
  cout << "\nEnter operation (+, -, *, /, %): ";
  cin >> operation;

  cout << "-----------------------------" << endl;

  switch (operation)
  {
  case '+':
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    break;
  case '-':
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    break;
  case '*':
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    break;
  case '/':
    switch (num2)
    {
    case 0:
      cout << "Division by zero not allowed." << endl;
      break;
    default:
      cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
      break;
    }
    break;
  case '%':
    cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
    break;
  case '.':
    cout << "Operation canceled" << endl;
    break;
  default:
    cout << "Invalid operation." << endl;
    return 1;
  }
  
  return 0;
}