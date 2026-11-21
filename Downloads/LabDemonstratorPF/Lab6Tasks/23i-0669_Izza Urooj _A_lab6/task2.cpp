# include <iostream>
using namespace std;

int main ()
{

char c;
cout<<"Enter your character "<<endl;
cin>>c;
int c1 = (c>=97 && c<=122);
int c2= (c>=65 && c <= 90);
int c3= (c >=48 && c <=57);

switch (c1){
case 1 :
cout<<"Its an lower case character ";
break;
case 0 :
switch (c2){
case 1 :
 cout<<"Its an upper case character ";
 break;
 case 0 :
 switch (c3) {
 case 1 :
 cout <<"Its a digit ";
 break;
 default :
 cout<<" Inavlid input ";
 }
 }
 
 }
return 0;}
