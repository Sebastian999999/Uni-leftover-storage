#include <iostream>
using namespace std;
int main()
{
	cout<<"    --------------------------------------         "<<endl;
	cout<<"        Inam ul Haq  23I-0839 CS-A        "<<endl;
	
	int c;
	
	cout<<"Enter Temprature: ";
	cin>>c;
	
		switch (c>=40){
			case 1:
				cout<<"Very Hot"<<endl;
			break;
			
			case 0:	
				switch (c>=30 && c<40)	{
					case 1:
					cout<<"Hot"<<endl;
					break;
					case 0:	
					
						switch (c>=20 && c<30){	
							case 1:
							cout<<"Normal"<<endl;
							break;
					
							case 0:
								switch (c>=10&& c<20){	
								case 1:
								cout<<"Cold"<<endl;
								break;	
								case 0:
									switch(c>=0 && c<10){
										case 1:
										cout<<"Very Cold"<<endl;
										break;
										case 0:
											switch(c<0){
												case 1: 
												cout<<"Freezing"<<endl;
												break;
		default:
		cout<<"Invalid Input";								
			}	
				}
					}
						}
							}	
								}
cout<<"    --------------------------------------         "<<endl;
		
return 0;
}
			
