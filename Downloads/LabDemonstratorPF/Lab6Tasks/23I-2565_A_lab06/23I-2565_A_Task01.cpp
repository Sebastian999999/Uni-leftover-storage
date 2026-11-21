//Muhammad Ali    23I-2565

#include<iostream>

using namespace std;

int main() {

	int num1, num2;
	char choice;

	cout << "Menu\n____________________\n+ Addition\n- Sutraction\n* Multiplication\n/ Division\n. Cancel\n____________________\nEnter 1st number: ";
	cin >> num1;
	cout << "\nEnter 2nd number: ";
	cin >> num2;
	cout << "\nEnter operation: ";
	cin >> choice;
	
	switch(choice)
	{
	case '+':
		cout << endl << num1 << " + " << num2 << " = " << num1+num2 << endl; break;
		
	case '-':
		cout << endl << num1 << " - " << num2 << " = " << num1-num2 << endl; break;
		
	case '*':
		cout << endl << num1 << " * " << num2 << " = " << num1*num2 << endl; break;
		
	case '/':
		{
		(num2 == 0)?cout << "\nDenominator is Zero(0). Cannot perform operation." << endl:(cout << endl << num1 << " / " << num2 << " = " << num1/num2 << endl);
		}
		
	case '.':
		cout << endl << "Program Cancelled" << endl; break;	
					
	default: 
		cout << endl << "Invalid operation" << endl;
	
	
	}



return 0;
}
