#include <iostream>
using namespace std;

//Hassan Adeel
//23I-0603

	int main()
		{
		
		//Variables
		int a,b;
		char ch;
		
		//The Menu
			cout << "Menu\n";
			cout << "--------------------" << endl;
				 
			cout << "+ Addition\n"
				 << "- Subtraction\n"
				 << "* Multiplication\n"
				 << "/ Division\n"
				 << "% Mod\n"
				 << ". Cancel\n\n";
				 
		//Taking Input
			cout << "Enter first number: ";
			cin >> a;
			
			cout << "Enter second number: ";
			cin >> b;
			
			cout << "Enter operation: ";
			cin >> ch;
			 
			//Switch 
		
			switch(ch)
			{
				case '+':
					cout << a << " + " << b << " = " << (a + b) << endl;
						break;
						
				case '-':
					cout << a << " - " << b << " = " << (a - b) << endl;
						break;
						
				case '*':
					cout << a << " * " << b << " = " << (a * b) << endl;
						break;
						
				case '/':
				  //Nested switch
					switch(b)
					{
						case 0:
							cout << "Division by 0 is not possible\n";
								break;
						
						default:
							cout << a << " / " << b << " = " << (a/b) << endl;
					}
						break;
						
				case '%':
				  //Nested Switch
					switch(b)
					{
						case 0:
							cout << "Mod by 0 is not possible\n";
								break;
						
						default:
							cout << a << " % " << b << " = " << (a % b) << endl;
					}
						break;
						
				case '.':
					cout <<"Operation cancelled"<< endl;
						break;
			}
			
				return 0;
		}
					
					
					
				
				 
