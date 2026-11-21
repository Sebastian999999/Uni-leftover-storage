#include <iostream>
using namespace std;
int main()
{


// MASAB TAHIR 23I-0006 A

int x;
cout<<"enter temperature in centigrade:";
cin>>x;


int z;
if(x>0){
z=x/10;
}
else{
z=-1;}

switch(z){

case (4):
cout<<"very hot";
break;

case (5):
cout<<"very hot";
break;

case (6):
cout<<"very hot";
break;

case (7):
cout<<"very hot";
break;

case (8):
cout<<"very hot";
break;

case (3):
cout<<"hot";
break;

case (2):
cout<<"normal";
break;

case (1):
cout<<"cold";
break;

case (0):
cout<<"very cold";
break;

case (-1):
cout<<"freezing";
break;

default:
cout<<"invalid";
break;




}












return 0;
}
