#include<iostream>
using namespace std;
int main()
{
int temp;
cout<<"Enter the temperature in Centigrade(C) : ";
cin>>temp;

switch (temp>40){
	case 1:
	cout<<"Very Hot"<<endl;
	break;
	case 0:
		switch(temp<40 && temp>=30){
		case 1:
		cout<<"Hot"<<endl;
		break;
	break;	
		case 0:
			switch(temp<30 && temp>=20){
			case 1:
			cout<<"Normal"<<endl;
			break;
		break;	
			case 0:
				switch(temp<20 && temp>=10){
				case 1:
				cout<<"Cold"<<endl;
				break;
			break;	
				case 0:
					switch(temp>0 && temp<10){
					case 1:
					cout<<"Very Cold"<<endl;
					break;
				break;	
					case 0:
					cout<<"Freezing"<<endl;
					break;
						default:
							cout<<"Input is Invalid "<<endl;
							break;
						}
					}
				}
			}
		}



return 0;
}
