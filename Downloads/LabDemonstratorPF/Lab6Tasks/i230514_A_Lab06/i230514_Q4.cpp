#include<iostream>
using namespace std;

int main(){
float temp;
cout<<"Enter the temperature: ";
cin>>temp;

switch(temp>=40&&temp<100){
case 1:
	cout<<"Very hot";
	break;
default:
	switch(temp>=30&&temp<40){
		case 1:
		cout<<"Hot";
		break;
	default:
		switch(temp>=20&&temp<30){
			case 1:
			cout<<"normal";
			break;
		default:
			switch(temp>=10&&temp<20){
				case 1:
				cout<<"cold";
				break;
			default:
				switch(temp>=0&&temp<10){
					case 1:
					cout<<"very cold";
					break;
				default:
					switch(temp<0&&temp>(-100)){
						case 1:
						cout<<"freezing";
						break;
					default:
						cout<<"Invalid input";
					}
				}
			}		
		}		
	}
}
cout<<endl;
return 0;
}
