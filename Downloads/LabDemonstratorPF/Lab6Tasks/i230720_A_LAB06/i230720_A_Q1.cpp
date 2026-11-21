//Ahmed Mujtaba i230720
#include<iostream>
using namespace std;
int main() {

	double a, b;
	cout << "Enter two numbers: ";
	cin >> a >> b;

	int choice;
	cout << "Enter the operation you wish(1 for addition, 2 for subtraction, 3 for division, 4 for multiplication and 5 for cancelling): ";
	cin >> choice;
	switch(choice) {
		case 1: 
			cout << "num1 + num2: " << a+b << endl;
			break;
		case 2:
			cout << "num1 - num2: " << a-b << endl;
			break;
		case 3:
			if(b == 0){cout << "division cannot be performed!" << endl; break;}
			cout << "num1 / num2: " << a/b << endl;
			break;
		case 4:
			cout << "num1 * num2: " << a*b << endl;
			break;
		case 5:
			cout << "Cancelling..." << endl;
			break;
		default:
			cout << "Enter valid option!";
			break;
	}
	
}
