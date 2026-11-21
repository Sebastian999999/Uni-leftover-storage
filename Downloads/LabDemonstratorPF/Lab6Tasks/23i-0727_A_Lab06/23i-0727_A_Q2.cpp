#include<iostream>
using namespace std;
int main()
{
char num;
cout<<"Enter a character : "<<endl;
cin>>num;

int ans1 , ans2 , ans3;
ans1 = (num>=65&&num<=90);
ans2 = (num>=97&&num<=122);
ans3 = (num>=49&&num<=57 );

	

	switch(ans1)
	{
	case 1 :
	cout<<"It is an uppercase letter"<<endl;
	break;
	
	case 0 :
	switch(ans2)
	{
	case 1 :
	cout<<"It is an lower case letter"<<endl;
	break;
	
	case 0 :
	switch(ans3)
	{
	case 1 :
	cout<<"It is a number "<<endl;
	break;

	default:
	cout<<"It is neither a number nor an alphabet "<<endl;
	}
	}
	
	}







return 0;
}
