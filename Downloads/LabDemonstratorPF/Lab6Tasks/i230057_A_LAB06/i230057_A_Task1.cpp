// Abdullah Razzaq, 23i0057, LAB06, Q1 //

# include <iostream>
using namespace std;

int main ()

{
float a,b;
int c;

cout << "This program will perform calculations on the two numbers you input." << endl;
cout << "Enter the two numbers you want to perform calculation on. " << endl;
cin >> a >> b;
cout << "which operation do you want to perform?" << endl << "Press the corresponding number" << endl << "1) Addition \n2) Substraction \n3) Multiplication \n4) Division" << endl;

cin >> c;

switch (c)
 
	{
	case 1: 
		cout << a << '+' << b << " = "  << a + b;
	break; 
	
	case 2: 
		cout << a << '-' << b << " = "  << a - b;
	break; 
	
	case 3: 
		cout << a << '*' << b << " = "  << a * b;
	break; 
	
	case 4:
	 
	if (b == 0) 
		cout << "invalid input: denominator cannot be zero";
	else 
		cout << a << '/' << b << " = "  << a / b;
	break; 
	
	default: ;
	
	
	}
	
cout << endl << endl;
	
return 0; 
}	
	
