#include<iostream>

using namespace std;

int main()
{

int num1,num2;
char operation;
int result;

cout<<" Menu"<<endl;

cout<<"------------------------"<<endl;

cout<<" +  Addition "<<" -   Subtraction "<<" *   Multiplication "<<" /   Division "<< " . cancel "<<endl;
cout<<"------------------------"<<endl;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    switch(operation) {
        case '+':
            cout<< "result = num1+ num2"<<endl;
            cout << "Result: " <<num1+num2;
            break;
        case '-':
        cout<< "result = num1- num2"<<endl;
            
            cout << "Result: "<<num1-num2;
            break;
        case '*':
        cout<<"result = num1 * num2"<<endl;
         
            cout << "Result: " << num1*num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: "<<num1/num2;
            } else {
                cout << "Error: Division by zero!";
            }
            break;
        case '%':
            if (num2 != 0) {
                result = (int)num1 % (int)num2;
                cout << "Result: " <<num1/num2;
            } else {
                cout << "Error: Division by zero!";
            }
            break;
        default:
            cout << "Error: Invalid operation!";
    }

    return 0;
}

