#include<iostream>
using namespace std;
int main()
{
int temp;
cout<<"Enter the tempertaure in degree celcius\n";
cin>>temp;
switch(temp>=40&&temp<=100)
{
case 1:
cout<<"Very hot\n";
break;
}
switch(temp>=30&&temp<40)
{
case 1:
cout<<"Hot\n";
break;
}
switch(temp>=20&&temp<30)
{
case 1:
cout<<"Normal\n";
break;
}
switch(temp>=10&&temp<20)
{
case 1:
cout<<"Cold\n";
break;
}
switch(temp>=0&&temp<10 )
{
case 1:
cout<<"Very Cold\n";
break;
}
switch(temp<0 && temp>=-1000)
{
case 1:
cout<<"Freezing\n";
break;
}
switch(temp>100||temp<-1000)
{
case 1:
cout<<"Invalid Input\n";
break;
}
return 0;
}
