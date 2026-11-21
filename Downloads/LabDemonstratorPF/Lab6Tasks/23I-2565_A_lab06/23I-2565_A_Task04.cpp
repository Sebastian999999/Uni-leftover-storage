// Muhammad Ali   23I-2565

#include<iostream>

using namespace std;

int main () {
	
	float temp;
	cout << "Enter Temperature in Celsius: ";
	cin >> temp;
	
	int a;
 	
 	(temp >= 40 && temp <=100)? a=1 : (temp>=30 && temp<40)? a=2 : (temp>=20 && temp<30)? a=3 : (temp>=10 && temp<20)? a=4 : (temp>=0 && temp<10)? a=5 : (temp<0 && temp >=-100)? a=6 : (temp>100 || temp<-100)? a=7 :  a=8;

 	
 	switch(a)
 	{
 	case 1:
 		cout << "\nVery Hot" << endl; break;
 	
 	case 2:	
 		cout << "\nHot" << endl; break;
 		
 	case 3:	
 		cout << "\nNormal" << endl; break;	
 	
 	case 4:	
 		cout << "\nCold" << endl; break;	
 	
 	case 5:	
 		cout << "\nVery Cold" << endl; break;	
 	
 	case 6:	
 		cout << "\nFreezing" << endl; break;	
 		
 	case 7:	
 		cout << "\nInvalid Input (Temp not in range (-100 - 100))" << endl; break;		
 	
 		
 	default:
 		cout << "\nInvalid Input." << endl;
 	
 	}
	
	

return 0;
}
