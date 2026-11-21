#include<iostream>
using namespace std;
int main()
{
char s;
cout<<"Enter the character"<<endl;
cin>>s;
switch(s>=97 && s<=122 || s>=65 && s<=90)
{
case 1:
cout<<"Character entered is an Alphabet"<<endl;
break;
default:
switch(s>=48 && s<=57)
{
case 1:
cout<<"Character entered is Digit"<<endl;
break;
}
}
 

return 0;
}


