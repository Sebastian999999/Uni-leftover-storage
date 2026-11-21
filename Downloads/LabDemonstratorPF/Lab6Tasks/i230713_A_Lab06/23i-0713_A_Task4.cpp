#include<iostream>
using namespace std;
int main(){
float temp;
cout<<"Hannan Abid         23i-0713               LAB06"<<endl<<endl;
cout<<"Enter temperature in Celsius"<<endl;
cin>>temp;
switch(temp>=40)	{
		case 1:
			cout<<"Very Hot"<<endl;
			break;
		case 0:
			switch(temp>=30 && temp<40)
			{
			case 1:
				cout<<"Hot"<<endl;
				break;
	
				
			case 0:
				switch(temp>=20 && temp<30)
				{
				case 1:
				cout<<"Normal"<<endl;
				break;
			
				case 0:
					switch(temp>=10 && temp<20)
					{
					case 1:
					cout<<"Cold"<<endl;
					break;
					
					case 0:
						switch(temp>=0 && temp<10)
						{
						case 1:
						cout<<"Very Cold"<<endl;
						break;
				
						case 0:
							switch(temp<0)
							{
							case 1:
							cout<<"Freezing"<<endl;
							break;
							}
						}
					}
				}
			}
				
      }
return 0;
}
