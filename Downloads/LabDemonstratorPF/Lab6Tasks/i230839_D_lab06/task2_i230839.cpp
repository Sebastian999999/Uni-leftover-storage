#include <iostream>
using namespace std;
int main()
{
	cout<<"    --------------------------------------         "<<endl;
	cout<<"        Inam ul Haq  23I-0839 CS-A        "<<endl;

	char a;
	
	cout<<"Enter input:";
	cin>>a;
	
		 switch(a>=65 && a<=90){
		 		case 1:
		 			cout<<"Entered Input is Character."<<endl;
		 		break;
		 		case 0:
		 			switch(a>=48 && a<=57){
		 			case 1: 
		 			cout<<"Entered Input is Number"<<endl;
		 			break;
		 			case 0:
		 				switch(a>=97 && a<=122){
		 				case 1:
		 				cout<<"Entered Input is Character."<<endl;
		 				break;
		 				case 0:
		 					switch(a>122){
		 					case 1:
							cout<<"Invalid Input"<<endl;
							break;
							case 0:
								switch(a<48){
								case 1:
								cout<<"Invalid Input"<<endl;
								break;
								case 0:
									switch(a>57 && a<65){
									case 1:
									cout<<"Invalid Input"<<endl;
									break;
								
		 		
		 					}		 	
						}
		 				
		 			}
		 		}
		 	}
		 
		 }
			
return 0;
}
