#include<iostream>
using namespace std;
int main()
{

int tem;
cout<<"Enter temprature: "<<endl;
cin>>tem;
switch(tem>=100)
{case 0 :
switch(tem>=40 && tem<=100)
{
case 1:
cout<<"very hot"<<endl;
break;
}

switch(tem<40 && tem>30)
{
case 1:
cout<<"Hot"<<endl;
break;
}

switch(tem>20 && tem<=30)
{
case 1:
cout<<"Normal"<<endl;
break;
}

switch(tem>10 && tem<=20)
{
case 1:
cout<<"Cold"<<endl;
break;
}

switch(tem>0 && tem<=10)
{
case 1:
cout<<"very cold"<<endl;
break;
}

switch(tem<=0 && tem >=-100)
{
case 1:
cout<<"Freezing"<<endl;
break;
}

switch(tem<-100)
{
case 1:
cout<<"Invalid input."<<endl;
break;
}

switch(tem>100)
{
case 1:
cout<<"Invalid input."<<endl;
break;
}
break;
default:
cout<<"Invalid input."<<endl;
}
return 0;
}
