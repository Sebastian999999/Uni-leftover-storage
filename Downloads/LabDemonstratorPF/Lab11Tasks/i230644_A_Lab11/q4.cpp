#include <iostream>
using namespace std;

int n;

int qualitypoints(int x,int y)
{
if(n>=90&&n<=100)
y=4;

if(n>=80&&n<=89)
y=3;

if(n>=70&&n<=79)
y=2;

if(n>=60&&n<=69)
y=1;

if(n<60&&n>=0)
y=0;

if(n<0||n>100)
cout<<"Enter a valid average number."<<endl;

cout<<y;
return y;
}


int main()
{
int x,y;
cout<<"Enter your average numbers."<<endl;
cin>>n;
qualitypoints(x,y);
cout<<endl;

return 0;
}
