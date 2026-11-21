#include <iostream>
using namespace std;

int main() {
int arr[5];
int a=0,b=0;

for(int i=0;i<5;i++)
{
    cout<<"Enter integers(1-9)"<<endl;
    cin>>a;
    if(a>=1 && a <=9)
        arr[i]=a;
    else
    {
    i--;
    }
}

cout<<"Enter Number to check"<<endl;
cin>>b;

for(int i=0;i<5;i++)
if(arr[i]==b)
{
    cout<<"Found"<<endl;
    break;
}
else
{
    cout<<"Not Found"<<endl;
    break;
}





return 0;
}