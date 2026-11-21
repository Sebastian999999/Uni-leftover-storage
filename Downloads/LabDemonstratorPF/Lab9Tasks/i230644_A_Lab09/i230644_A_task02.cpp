#include<iostream>
using namespace std;
int main()
{
char ar[5]={'a','h','m','e','d'};
char a='a';
int count=0;

cout<<"My name is Ahmed ."<<endl;

for(int i=0;i<5;i++)
{
if(ar[i]==a)
count++;
}

cout<<"there are "<<count<<" a letters in my name. "<<endl;

return 0;
}
