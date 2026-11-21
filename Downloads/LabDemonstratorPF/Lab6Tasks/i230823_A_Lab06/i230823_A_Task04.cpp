	//Zoha Fatima
	//23i-0823
#include<iostream>
using namespace std;
int main(){

int temp;

cout<<"Enter temperature in Centigrade: ";
cin>>temp;

switch (temp >= 40){

case 1:
cout<<"Very Hot.\n";
break;

case 0:
	switch( temp >= 30 && temp < 40){
	case 1:
	cout<<"Hot.\n";
	break;
	case 0:
		switch( temp >=20 && temp < 30){
		case 1:
		cout<<"Normal.\n";
		break;
		case 0:
			switch( temp >= 10 && temp < 20){
			case 1:
			cout<<"Cold.\n";
			break;
			case 0:
				switch( temp >= 0 && temp < 10){
				case 1:
				cout<<"very Cold.\n";
				break;
				case 0:
					switch( temp < 0){
					case 1:
					cout<<"Freezing.\n";
					break;
					
					
					}
				 	break;
				}
				break;
			}
			break;
		}
		break;
	}	
	break;
	
}

return 0;
}
