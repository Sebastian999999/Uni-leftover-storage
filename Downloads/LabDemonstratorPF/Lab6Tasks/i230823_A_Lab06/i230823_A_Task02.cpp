	//Zoha Fatima
	//23i-0823
#include<iostream>
using namespace std;
int main(){

char ch;
cout<<"Enter character: \n";
cin>>ch;

switch(int(ch) >= 65 && int(ch) <= 90 || int(ch) >= 97 && int(ch) <= 122){
 
case 1:
cout<<"The character entered is Alphabet.\n";
break;

case 0:
	switch(int(ch) >= 48 && int(ch) <= 57)
	{
 	case 1:
 	cout<<"The character entered is Digit.\n";
 	break;
 	case 0:
 	cout<<"Invalid input.\n";
 	break;
 	}
	break;

}

return 0;
}
