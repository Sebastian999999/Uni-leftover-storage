#include<iostream>
using namespace std;

int main(){
char c;
cout<<"Enter a character: ";
cin>>c;

switch(c>='A'&&c<='Z'){
case 1:
	cout<<"Alphabet";
	break;
default:
	switch(c>='a'&&c<='z'){
	case 1:
		cout<<"Alphabet";
		break;
	default:
		switch(c>='0'&&c<='9'){
	case 1:
		cout<<"Number";
		break;
	default:
		cout<<"Enter a valid input";
		}
	}
}
cout<<endl;
return 0;
}
