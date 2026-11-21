//Name:Irtaza Kazmi Roll No.:23i-6001
#include<iostream>
using namespace std;
int main()
{

char ch;
cout<<"Enter a Character : ";
cin>>ch;

switch(ch>=65 && ch<=90 || ch>=97 && ch<=122)
{
case true:
cout<<"The character is an alphabet "<<endl;
break;
case false:
	switch(ch>=48 && ch<=57)
	{
	case true:
	cout<<"The character is an integer "<<endl;
	break;
	case false:
	cout<<"Invalid Input  "<<endl;
	break;
	}
	break;
}
return 0;
}
