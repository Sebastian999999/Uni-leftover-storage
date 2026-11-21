#include<iostream>
using namespace std;
int main()
{

int  num;
cout<<"Enter temperature in celcius : ";
cin>>num;

int temp1 , temp2 , temp3 ,temp4 ,temp5 ,temp6;
temp1 = (num>=40);
temp2 = (num>=30&&num<40);
temp3 = (num>=20&&num<30 );
temp4 = (num>=10&&num<20 );
temp5 = (num>=0&&num<10 );
temp6 = (num<0);
	switch(temp1)
	{
	case 1 :
	cout<<"Very hot "<<endl;
	break;
	
	case 0 :
	switch(temp2)
	{
	case 1 :
	cout<<"hot"<<endl;
	break;
	
	case 0 :
	switch(temp3)
	{
	case 1 :
	cout<<"normal "<<endl;
	break;
	
	case 0 :
	switch(temp4)
	{
	case 1 :
	cout<<"cold "<<endl;
	break;
	
	case 0 :
	switch(temp5)
	{
	case 1 :
	cout<<"very cold "<<endl;
	break;
	case 0 :
	switch(temp6)
	{
	case 1 :
	cout<<"freezing "<<endl;
	break;
	default :
	cout<<"Invalid"<<endl;
	}
	}
	}
	}
	}
	}
	
return 0;
}

