#include <iostream>
//Zain Ul Arifeen Sukhera 23i-0750 CS-A LAB#06
using namespace std;
int main()
{
//initialisation
char ch;

//prompts
cout<<"Enter a character to find out if it is a charcter or an alphabet"<<endl;
cin>>ch;


//switch statement
	switch (ch>=65 && ch <=122)
	
	{
		case 1:
			{
			cout<<"It is an alphabet"<<endl;
			return 0;
			}
		case 0: 
			{
				//nested switch 
				
				switch (ch>=48 && ch <=57)				
				{	
					case 1: 
					{
					cout<<"It is a number"<<endl;
					return 0;
					}
					
					case 0:
					{
					cout<<"Invalid Input"<<endl;
					return 0;
					}
					
				}
	
			}

	}
return 0;
}
