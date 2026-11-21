#include<iostream>
using namespace std;
int main()
{
int temp;
cout<<"Enter the temperature: ";
cin>>temp;
switch( temp>=40 && temp<=100 ){
case 1:
cout<<"Very Hot"<<endl;
break;
}
switch(temp>=30 && temp<40 ){
case 1:
cout<<"Hot"<<endl;
break;
}
switch(temp>=20 && temp<30 ){
case 1:
cout<<"Normal"<<endl;
break;
}
switch(temp>=10 && temp<20 ){
case 1:
cout<<"Cold"<<endl;
break;
}
switch(temp>=0 && temp<10 ){
case 1:
cout<<"Very Cold"<<endl;
break;
}
switch(temp<0 && temp>=-100){
case 1:
cout<<"Freezing"<<endl;
break;
}
switch( temp>100 || temp<-100 )
{
case 1:
cout<<"Invalid Input!!!"<<endl;
break;
}
return 0;
}
