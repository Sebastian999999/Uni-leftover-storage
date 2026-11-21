#include <iostream>

using namespace std;

int main()
{

int temperature;

cout<<"enter temperature: "<<endl;
cin>>temperature;

switch(temperature<=40 && temperature>30)
{

case 1:

cout<<"HOT"<<endl;
break;
}


switch(temperature>=40 && temperature<=100)
{

case 1:

cout<<"very HOT"<<endl;
break;
}

switch(temperature>20 && temperature<=30)
{

case 1:

cout<<"normal"<<endl;
break;
}

switch(temperature>10 && temperature<=20)
{

case 1:

cout<<"cold"<<endl;
break;
}

switch(temperature>0 && temperature<=10)
{

case 1:

cout<<"very cold"<<endl;
break;
}

switch(temperature<=0 && temperature>=-100)
{

case 1:

cout<<"freezing"<<endl;
break;
}
switch(temperature<-100)
{

case 1:

cout<<"invalid input."<<endl;
break;
}
switch(temperature>100)
{

case 1:

cout<<"invalid input."<<endl;
break;

}

return 0;

}





