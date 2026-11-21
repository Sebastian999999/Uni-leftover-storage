// Abdullah Razzaq, 23i0057, LAB06, Q2 //

# include <iostream>
using namespace std;

int main ()
{
char ch;

cout << "This program will tell you wether you have input an alphabet or a digit, input your character: " << endl;
cin >> ch;


switch ((ch>='0' && ch<='9') || (ch>='A' && ch <='z'))

{
	case 1:
 
		switch (ch>= '0' && ch <='9')
	{ 
			case 1: cout << "character is a digit" << endl; break;
			case 0: cout << "character is an alphabet" << endl; break; 
	}

	break;

	case 0:

	cout << "Invalid Input" << endl;

}

}
  


