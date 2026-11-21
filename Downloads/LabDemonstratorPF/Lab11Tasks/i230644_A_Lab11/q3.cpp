#include <iostream>
using namespace std;

int x;
int divide (int a, int b=2)
{
x=a/b;
cout<<"The result is: "<<x<<endl;
return x;
}


int main()
{
int a,b;

cout<<"Enter first number: "<<endl;
cin>>a;
cout<<"Enter second no.(optional).if not press 0."<<endl;
cin>>b;

if(b==0)
divide(a);
else
divide(a,b);

return 0;
}


