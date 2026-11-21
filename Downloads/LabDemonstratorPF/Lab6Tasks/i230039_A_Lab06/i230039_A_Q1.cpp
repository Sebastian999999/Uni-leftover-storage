# include <iostream>
using namespace std;

int main() {

	cout << "Hiyam Rehan, 23I-0039, Q#1\n\n";
	
	// Initializing 
	int a, b;
	char opp;
	
	// Taking inputs
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	
	// Operation to be checked
	cout << "Enter operation to be performed: ";
	cin >> opp;
	
	// Checking using switch
	switch (opp) {
	case '+': // Addition
		cout << endl << a << " + " << b << " = " << (a+b) << endl;
		break;
	case '-': // Subtraction
		cout << endl << a << " - " << b << " = " << (a-b) << endl;
		break;
	case '*': // Multiplicatiom
		cout << endl << a << " * " << b << " = " << (a*b) << endl;
		break;
	case '/': // Division
		if (b==0) // To check if denominator is 0
			cout << endl << "Error: Denominator can't be zero." << endl;
		else
			cout << endl << a << " / " << b << " = " << (a/b) << endl;
		break;
	case '.': // Cancel program
		cout << "\nEnding program..." << endl;
		break;
	default: // Check for invalid input
		cout << "\nError: Invalid Output." << endl;
	}
	
	return 0;
}
