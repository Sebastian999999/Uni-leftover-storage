#include<iostream>
using namespace std;
int main()
{
//Hamna Asif , 23i-0658 ;

	int t;
	cout<<"\nEnter temperature in centigrade = ";
	cin>>t;
	
	
	switch(t>=40){
	
		case 1:
			cout<<"Very Hot"<<endl;
			break;
		case 0:
			switch(t>=30 && t<40){
			case 1:
			cout<<"hot";
				break;
			case 0:
			 switch(t>=20 && t<30){
			case 1: 
			cout<<" normal";
				break;
			case 0:
			switch(t>=10 && t<20){
			case 1:
			cout<<"cold";
				break;
		         case 0:
		        switch(t>=0 && t<10){
		         case 1:
		         cout<<"Very Cold";
		         break;
		         case 0:
		         cout<<"frezing";
		         break;}
		         }

			}

			}
}
			

return 0;
}
