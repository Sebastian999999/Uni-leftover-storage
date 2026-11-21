#include<iostream>
using namespace std;
int main()
{
int tp;
cout<<"Enter the temperature"<<endl;
cin>>tp;
switch( tp>100 || tp<-100 ){
case 1:
cout<<"Invalid Input"<<endl;
break;
}
switch( tp>=40 && tp<=100 ){
case 1:
cout<<"Very hot"<<endl;
break;
}
switch(tp>=30 && tp<40 ){
case 1:
cout<<"Hot"<<endl;
break;
}
switch(tp>=20 && tp<30 ){
case 1:
cout<<"Normal"<<endl;
break;

}
switch(tp>=10 && tp<20 ){
case 1:
cout<<"Cold"<<endl;
break;
}
switch(tp>=0 && tp<10 ){
case 1:
cout<<"Very Cold"<<endl;
break;
}
switch(tp<0 && tp>=-100){
case 1:
cout<<"Freezing"<<endl;
break;
}

return 0;
}
