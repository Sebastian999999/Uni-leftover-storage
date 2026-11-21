#include <iostream>
using namespace std;
int main()
{
int Temp;
cin>>Temp;

switch(Temp/10){

case 4:
cout<<"Very Hot"<<endl;
break;
case 3:
cout<<"Hot"<<endl;
break;
case 2:
cout<<"Normal"<<endl;
break;
case 1:
cout<<"Cold"<<endl;
break;
case 0:
cout<<"Very Cold"<<endl;
break;
case -1:
cout<<"Freezing"<<endl;
break;

}







return 0;
}
