#include <iostream>
using namespace std;


int main()

{

char input;
cout<<"ENTER USER'S INPUT:"<<endl;

cin>>input;



switch (input>='A' && input <='Z' || input >='a' && input <='z')
{
case 1:
cout<<"USER HAS ENTERED ALPHABET"<<endl;
break;
case 0:
switch (input>='0'&& input <='9')
{
case 1:
cout<<"USER HAS ENTERED DIGIT"<<endl;
break;
default:
cout<<"USER HAS ENTERED SPECIAL CHARACTER"<<endl;
break;
}
}
return 0;
}

