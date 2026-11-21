#include<iostream>
#include<cstdlib>
#include<ctime>



using namespace std;
int main()
{
srand(time(0));

int a = (rand() % 100)+1;

const int size =5;

int arr[size][size];


for(int i=0;i<size;i++)
{
for(int j=0;j<size;j++)
{

a = (rand() % 100)+1;

arr[i][j]=a;
}


}
cout<<"STRAIGHT ORDER OF ARRAY"<<endl;

for(int i=0;i<size;i++)
{
for(int j=0;j<size;j++)
{

cout<<arr[i][j]<<"  ";

}

cout<<endl;

}

cout<<"REVERSE ORDER OF ARRAY"<<endl;

for(int i=size-1;i>=0;i--)
{
for(int j=size-1;j>=0;j--)
{

cout<<arr[i][j]<<"  ";

}
cout<<endl;

}









































return 0;
}
