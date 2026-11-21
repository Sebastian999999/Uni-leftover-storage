#include <iostream>
using namespace std;
//Hassan Adeel
//23I-0603
	int main()
		{
			//Variables
			char ch;
			bool num1;
			bool num2;
			int num3;
			
			
			
			//Taking Input
				cout << "Enter character: ";
				cin >> ch;
			num3 = int(ch);
			//1st Condition (This is for checking the validity of our input)
			num1 = (((num3 >= 48) && (num3 <= 57)) || ((num3 >=65) && (num3 <=90)) || ((num3 >= 97) && (num3 <= 122)));
			
			//2nd Condition(This is for checking whether our character is an alphabet or digit)
			num2 = ((num3 >=65 && num3 <=90) || (num3 >= 97 && num3 <= 122));
					
			//Switch
			switch(num1)
			{
				case 1:
					//Nested Switch
					
						switch(num2)
						{
							case 1:
							 cout << "Character is an alphabet\n";
							  break;
							  
							default:
							 cout << "Character is a digit\n";
						}
							
						break;
						
				default:
					cout << "Invalid input\n"; 
			}
			
			num2 = (((int)ch >=65 && int(ch) <=90) && ((int)ch <= 97 && (int)ch >= 122));
						
					
				
			return 0;
		}
