#include <iostream>
using namespace std;
int main()
{


// MASAB TAHIR 23I-0006 A
char input;
cout<<"Enter a character: ";
cin>>input;

switch (input) {
case '0' ... '9':
cout<<"It's a digit."<<endl;
break;
case 'a' ... 'z':
case 'A' ... 'Z':
cout<<"It's an alphabet."<<endl;
break;
default:
cout<<"Invalid Input."<<endl;
}












return 0;
}
