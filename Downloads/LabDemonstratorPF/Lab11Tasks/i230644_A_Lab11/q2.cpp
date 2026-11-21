#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int n;


int flip()
{
n=rand()%2;
return n;
}


int main()
{
srand((time(0)));
int x,sum=0;

for(int i=0;i<100;i++)
{
x=flip();
if(x==1)
cout<<"Heads"<<endl;
if(x==0)
cout<<"Tails"<<endl;


if(x==1)
sum+=x;
}

cout<<"The no. of times heads appeared is: "<<sum<<endl;

cout<<"The no. of times tails appeared is: "<<100-sum<<endl;


return 0;
}
