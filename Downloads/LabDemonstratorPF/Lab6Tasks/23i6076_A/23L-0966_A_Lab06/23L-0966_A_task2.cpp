#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter the character:";
	cin>>ch;
	switch ((ch>='0' && ch<='9')||(ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
	{
	case 0:
	cout<<"Invalid expression!"<<endl;
	break;
	case 1:
	switch ((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
	{
	case 1:
	cout<<"It is a alphabet"<<endl;
	break;
	case 0:
	cout<<"It is a number"<<endl;
	}
	break;
	}
	return 0;
}
