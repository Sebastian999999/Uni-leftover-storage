#include<iostream>
using namespace std;

int main()
{
char ch;
cout<<"Enter the character : \n";
int n;
cin>>ch;
switch(ch||((n>=0)&&(n<=9)))
{
case 1:
cout<<"Valid :";
break;
case 0:
cout<<"Invalid";
}

}
