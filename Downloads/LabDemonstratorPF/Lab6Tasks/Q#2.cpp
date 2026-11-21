#include<iostream>
using namespace std;
int main()
{
char input;
cin>>input;
switch(input>=65 && input<=90)
{
case 1 :
cout<<"Input is a Capital Letter";
break;
default :
	
	switch(input>=97 && input<=122)
	{
	case 1 :
	cout<<"Input is a small letter";
	break;
	default :
		
		switch(input>=48 && input<=57)
		{
		case 1 :
		cout<<"Input is a number";
		break;

default :
cout<<"Invalid input"<<endl;
}
}
}

return 0;
}


