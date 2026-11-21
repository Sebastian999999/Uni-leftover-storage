//Aaiz Ur Rehman Kazmi 23I-0589
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter to check Alphabet: ";
	cin>>ch;
	
	switch((ch>='A'&& ch<='Z')||(ch>='a'&&ch<='z')){
		
		case true :
			cout<< ch <<" is an Alphabet "<<endl;
			break;
		case false :
			switch(ch >='0' && ch <= '9'){
				case true :
				cout<< ch <<" is digit "<<endl;
				break;
				case false :
				cout<< ch << " is Invalid Input"<<endl;
				break;
			}
			
				
	}		
	return 0;	
}

