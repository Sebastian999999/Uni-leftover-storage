#include <iostream>
using namespace std;
int main()
{
char ch;
cout<<"Enter a character: ";
cin>>ch;

switch((ch >='A' && ch<='Z') || (ch>='a' && ch <= 'z')){

case 1:
cout<<"Entered value is a Alphabet"<<endl;
break;
case 0:
switch(ch>='0' && ch<='9'){
break;
case 1:
cout<<"Entered value is a number"<<endl;
break;
case 0:
cout<<"Invalid Input"<<endl;
break;
}
}





return 0;
}
