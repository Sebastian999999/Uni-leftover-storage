#include<iostream>
using namespace std;

int main() { 
    	int number1, number2;
   	 char sign;

    cout << "ENTER NUMBER 1: ";
   cin >> number1;

    cout << "ENTER NUMBER 2: ";
   cin >> number2;

    cout << "ENTER OPERATION (*, /, +, -): ";
    cin >> sign;

    switch(sign) {
        case '*' :
            cout << "MULTIPLICATION OF 2 NUMBERS: ";
            cout << number1 * number2;
            cout << endl;
            break;

        case '/' :
            switch (number2) {
                case 0 :
                    cout << " WE CANNOT  DIVIDE  BY ZERO" << endl;
                    break;
                default :
                    cout << "DIVISION OF 2 NUMBERS: ";
                    cout << number1 / number2;
                    cout << endl;
                    break;
            }
            break;

        case '+' :
            cout << "ADDITION OF 2 NUMBERS: ";
            cout << number1 + number2;
            cout << endl;
            break;

        case '-' :
            cout << "SUBTRACTION OF 2 NUMBERS: ";
            cout << number1 - number2;
            cout << endl;
            break;
	case '%' :
	cout<<"MODULUS OF 2 NUMBERS : ";
	cout << number1%number2;
	break; 
        default :
            cout << "ENTER VALID CHARACTER" << endl;
            break;
    }
    return 0;
}


