#include<iostream>
using namespace std;
int main()
{
char c;
cout<<"Enter a digit or character: "<<endl;
cin>>c;
int x=(int)c;


	switch(x>=65 && x<=90)
	{
	case 1:
	cout<<"Entered input is Alphabet"<<endl;
	break;
	}
	
	
	switch(x>=97 && x<=122)
	{
	case 1:
	cout<<"Entered input is Alphabet"<<endl;
	break;
	}



	switch(x>=48 && x<=57)
	{
	case 1:
	cout<<"Entered input is Digit"<<endl;
	break;
	}
	
	switch(x<48)
	{
	case 1:
	cout<<"invalid input"<<endl;
	}
	
	
	switch(x>122)
	{
	case 1:
	cout<<"invalid input"<<endl;
	}
	
	switch(x>90 && x<97)
	{
	case 1:
	cout<<"invalid input"<<endl;
	}
	
	switch(x>57 && x<65)
	{
	case 1:
	cout<<"invalid input"<<endl;
	}
	
return 0;
}
