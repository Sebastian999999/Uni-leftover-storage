#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
switch (t>=40 && t<=100)
{
case 1 :
cout<<"Very HOt";
break;
}
switch (t>=30 && t<40)
{
case 1 :
cout<<"HOT";
break;
}
switch (t>=20 && t<30)
{
case 1 :
cout<<"Normal";
break;
}
switch (t>=10 && t<20)
{
case 1 :
cout<<"Cold";
break;
}
switch (t>=0 && t<10)
{
case 1 :
cout<<"Very Cold";
break;
}
switch (t<=0 && t>=(-100))
{
case 1 :
cout<<"Freezing";
break;
}
switch(t<(-100) || t>100)
{
case 1 :
cout<<"Invalid"<<endl;
break;
}

return 0;
}
