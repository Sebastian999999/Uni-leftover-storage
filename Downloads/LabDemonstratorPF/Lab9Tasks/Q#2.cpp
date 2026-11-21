#include<iostream>
using namespace std;
int main()
{
int count=0;;
char ar[4]={'S','A','A','D'};
for(int i=0;i<4;i++)
{
if(ar[i]=='a')
{
count++;
}
}
cout<<"A is present "<<count<<" times"<<endl;
return 0;
}
