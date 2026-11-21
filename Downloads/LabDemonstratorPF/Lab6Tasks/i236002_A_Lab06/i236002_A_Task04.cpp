#include <iostream>
using namespace std;


int main()
{

int temp;
cout<<"ENTER TEMPERATURE"<<endl;
cin>>temp;

switch (temp>=40)
{
case 1:
cout<<"Very HOT"<<endl;
case 0:
switch (temp>=30 && temp<40)
{
case 1:
cout<<"HOT"<<endl;
break;
case 0:
switch (temp>=20 && temp<30)
{
case 1:
cout<<"NORMAL"<<endl;
break;
case 0:
switch (temp >=10 && temp <20)
{
case 1:
cout<<"COLD"<<endl;
break;
case 0:
switch (temp>=0 && temp<10)
{
case 1:
cout<<"VERY COLD"<<endl;
break;
case 0:
switch (temp<0)
{
case 1:
cout<<"FREEZING"<<endl;
break;

}
}
}
}
}
}

return 0;
}





