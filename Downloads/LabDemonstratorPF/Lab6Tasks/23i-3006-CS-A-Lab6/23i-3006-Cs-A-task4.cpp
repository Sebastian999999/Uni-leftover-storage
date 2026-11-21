#include<iostream>
using namespace std;
int main()
{
int temp;
cout<<"Enter the temperature :"<<endl;
cin>>temp;

switch(temp>=40)
{
	case 1:
	cout<<"Very Hot";
	break;
	case 0:
	switch((temp>=30)&&(temp<40))
	{
		case 1:
			cout<<"Hot";
			break;
		case 0:
		
		switch(temp>=20&&temp<30)
		{
			case 1:
			cout<<"Normal";
			break;
			
			case 0:
			switch(temp>=10&&temp<20)
			{
					case 1:
					cout<<"Cold";
					break;
					
					case 0:
					switch(temp>0 && temp<10)
					{
						case 1:
						cout<<"Very Cold";
						break;
						
						case 0:
						default:
						cout<<"Freezing";
					}
					break;
			}
			break;
		}
		break;

	}
break;
}
}
